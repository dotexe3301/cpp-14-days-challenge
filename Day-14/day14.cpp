#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n;

    vector<int> A(n + 1, 0); // 1-based index, so size is n+1
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    // Step 1: Construct prefix sum array
    vector<int> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }

    cin >> q;
    vector<int> result;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // Step 2: Answer the query using prefix sum
        result.push_back(prefixSum[r] - prefixSum[l - 1]);
    }

    for (int i = 0; i < result.size(); i++)
    {
        if (i == result.size() - 1)
        {
            cout << result[i];
        }
        else
        {
            cout << result[i] << " ";
        }
    }
    return 0;
}