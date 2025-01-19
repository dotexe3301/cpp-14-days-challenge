#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Step 1: Initialize the influence score for each user
    vector<int> influenceScore(n, 0);

    // Step 2: Read edges and update follower counts
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        if (u != v) { // Avoid self-loops in counting
            influenceScore[v]++;
        }
    }

    // Step 3: Find the user with the highest influence score
    int maxScore = -1;
    int userId = -1;

    for (int i = 0; i < n; i++) {
        if (influenceScore[i] > maxScore || 
           (influenceScore[i] == maxScore && i < userId)) {
            maxScore = influenceScore[i];
            userId = i;
        }
    }

    // Step 4: Output the result
    cout << userId;

    return 0;
}