#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BrowserHistory
{
private:
    vector<string> history;
    int currentIndex;

public:
    BrowserHistory(string homepage)
    {
        history.push_back(homepage);
        currentIndex = 0;
    }
    BrowserHistory()
    {
        currentIndex = 0;
    }
    void visit(string url)
    {
        history.resize(currentIndex + 1);
        history.push_back(url);
        currentIndex++;
    }
    string back(int steps)
    {
        currentIndex = max(0, currentIndex - steps);
        return history[currentIndex];
    }
    string forward(int steps)
    {
        currentIndex = min((int)history.size() - 1, currentIndex + steps);
        return history[currentIndex];
    }
};
int main()
{
    int n;
    cin >> n;
    string operation, url;
    int steps;
    BrowserHistory browserHistory("chaicode.com");

    string result = "chaicode.com ";
    for (int i = 0; i < n; i++)
    {
        cin >> operation;
        if (operation == "visit")
        {
            cin >> url;
            browserHistory.visit(url);
            result += url + " ";
        }
        else if (operation == "back")
        {
            cin >> steps;
            result += browserHistory.back(steps) + " ";
        }
        else if (operation == "forward")
        {
            cin >> steps;
            result += browserHistory.forward(steps) + " ";
        }
    }

    cout << result.substr(0, result.size() - 1);
    return 0;
}