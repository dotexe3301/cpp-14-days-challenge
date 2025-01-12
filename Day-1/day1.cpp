#include <iostream>
#include <string>

using namespace std;

bool containsGlitchPattern(const string& videoStream, const string& glitchPattern) {
    int n = videoStream.size();
    int m = glitchPattern.size();

    for(int i =0 ; i<n-m ; i++)
    {
        int j=0;
        for( ; j<m ; j++)
        {
            if(videoStream[i+j]!=glitchPattern[j])
                break;
        }
        if(j==m)
            return true;
    }
    return false;
 }

int main() {
    string videoStream, glitchPattern;
    cin >> videoStream;
    cin >> glitchPattern;

    if (containsGlitchPattern(videoStream, glitchPattern)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}