#include <vector>
#include <deque>
#include <iostream>
using namespace std;

// Intuition:
//  - as we are using a sliding window, we need to keep track of the maximum price in the current window
// - think of it like a queue, we need to keep track of the maximum price in the current window
// - we can use a deque to store the indices of the prices in the current window
// - we can use a vector to store the result
// - we can iterate through the prices and for each price, remove the indices of the prices that are smaller than the current price
// - we can add the current price's index to the deque
// - if the current index is greater than or equal to k - 1, we can add the price at the front of the deque to the result
// Time Complexity: O(n) 
// Space Complexity: O(n)

vector<int> maxInRollingWindow(vector<int>& prices, int k) {
    vector<int> result;
    deque<int> dq; 
    for (int i = 0; i < prices.size(); i++) {
        // remove indices not in the current window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }
        // remove indices of elements smaller than the current element
        while (!dq.empty() && prices[dq.back()] < prices[i]) {
            dq.pop_back();
        }
        // add the current element's index to the deque
        dq.push_back(i);
        // append the maximum of the current window to the result
        if (i >= k - 1) {
            result.push_back(prices[dq.front()]);
        }
    }
    return result;
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    vector<int> result = maxInRollingWindow(prices, k);
    for(int i = 0; i < result.size(); i++) {
        if(i == result.size() - 1) {
            cout << result[i];
        } else {
            cout << result[i] << " ";
        }
    }
    return 0;
}