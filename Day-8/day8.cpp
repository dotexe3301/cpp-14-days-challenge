#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Quality {
    string quality;
    int required;
};
string selectStreamQuality(int bandwidth, vector<Quality>& qualities) {
    if (qualities.empty()) {
        return "No Quality Available";
    }
    // Step 1: Sort qualities by required bandwidth in ascending order
    sort(qualities.begin(), qualities.end(), [](const Quality& a, const Quality& b) {
        return a.required < b.required;
    });
    // Step 2: Initialize result
    string result = "No Quality Available";
    // Step 3: Find the highest quality that meets the bandwidth constraint
    for (const auto& quality : qualities) {
        if (quality.required <= bandwidth) {
            result = quality.quality; // Update result if the quality fits
        } else {
            break; // Stop iterating as remaining qualities require more bandwidth
        }
    }
    return result;
}
int main() {
    int bandwidth;
    cin >> bandwidth;
    int n;
    cin >> n;
    if (n <= 0) {
        cout << "No Quality Available";
        return 0;
    }
    vector<Quality> qualities(n);
    for (int i = 0; i < n; ++i) {
        cin >> qualities[i].quality >> qualities[i].required;
    }
    cout << selectStreamQuality(bandwidth, qualities);
    return 0;
}