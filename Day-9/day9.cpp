#include <iostream>
#include <vector>
using namespace std;

// 
vector<int> sol(int n, vector<int>& A) {
    vector<int>odds;
    int even = -1;
    for(int i = 0 ; i<A.size() ; i++)
    {
        if(A[i]%2 == 0)
        {
            A[++even] = A[i];
        }
        else
        {
            odds.push_back(A[i]);
        }
    }
    even++;
    A.erase(A.begin() + even, A.end());
    for(int i = 0 ; i<odds.size() ; i++)
    {
        A.push_back(odds[i]);
    }
    return A;

}
int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<int> result = sol(n, A);
    for (int i = 0; i < n; i++) {
        if (i == result.size() - 1) {
            cout << result[i];
        } else {
            cout << result[i] << " ";
        }
    }
    return 0;
}