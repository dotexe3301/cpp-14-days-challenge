#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximizeAdRevenue(const vector<int> &viewer_retention, const vector<int> &ad_value, int k)
{
    int n = (int)viewer_retention.size();
    if (n == 0 || k == 0) {
        return {};
    }
    
    // Step 1: precompute score for each second: score[i] = viewer_retention[i] * ad_value[i].
    // use long long in case the product can exceed 32-bit integer range.
    vector<long long> score(n);
    for (int i = 0; i < n; ++i) {
        score[i] = 1LL * viewer_retention[i] * ad_value[i];
    }

    // Step 2: dp[i][j] = maximum total score using first i seconds (1-based indexing),
    //            placing exactly j ads with no two consecutive.
    // we'll create (n+1) x (k+1) table and initialize to 0.
    static const long long NEG_INF = -1e15; // Just a sentinel for clarity
    vector<vector<long long>> dp(n+1, vector<long long>(k+1, 0LL));

    // Step 3: Fill the DP table
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            // Option 1: do not place an ad at second i
            long long best = dp[i-1][j];

            // Option 2: place an ad at second i (then i-1 must not have an ad)
            // i corresponds to index (i-1) in the score array.
            if (i >= 2) {
                // We can safely look at dp[i-2][j-1]
                best = max(best, dp[i-2][j-1] + score[i-1]);
            } else {
                // i == 1
                // If we have j >= 1, we can place an ad in the 1st second
                best = max(best, score[i-1]);
            }

            dp[i][j] = best;
        }
    }

    // the value dp[n][k] holds the maximum possible score, but we want the indices too.
    // backtrack to find which indices were chosen.
    vector<int> chosen;
    int i = n, j = k;
    while (i > 0 && j > 0) {
        // if dp[i][j] came from dp[i-1][j], then we did NOT place an ad at i
        if (dp[i][j] == dp[i-1][j]) {
            i -= 1;
        } else {
            // otherwise, we placed an ad at second i
            chosen.push_back(i - 1);  // record the (0-based) index
            i -= 2;  // skip the adjacent second
            j -= 1;
        }
    }

    // The chosen indices are in reverse order, so we reverse them
    reverse(chosen.begin(), chosen.end());
    return chosen;
}


int main() {
    vector<int> viewer_retention ;
    vector<int> ad_value         ;
    int k;
    int n;

    cin >> n; 
    cin >> k;

    for (int i = 0; i < n; ++i) {
        int retention;
        cin >> retention;
        viewer_retention.push_back(retention);
    }
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        ad_value.push_back(value);
    }


    vector<int> result = maximizeAdRevenue(viewer_retention, ad_value, k);
    for (int i = 0; i < result.size(); ++i) {
        if (i == result.size() - 1) {
            cout << result[i];
        } else {
            cout << result[i] << " ";
        }
    }

    return 0;
}