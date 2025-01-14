#include <iostream>
#include <string>
using namespace std;

// you need to implement this function only
bool isPalindrome(string s, int i, int j)
{
    while(i<=j)
    {
        if(s[i++] != s[j--])
            return false;
    }
    return true;
}
bool canBePalindrome(string s) {
    int i = 0;
    int j = s.size()-1;
    while(i<j)
    {
        if(s[i] == s[j])
        {
            i++;
            j--;
        }
        else{
            return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s; 
    // please don't modify the main function
    cout << (canBePalindrome(s) ? "YES" : "NO");
    return 0;
}
