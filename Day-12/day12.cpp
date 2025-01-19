#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Intuition:
// 1. Calculate the time required to travel each road at a given speed.
// 2. Use binary search to find the minimum speed that allows the journey to be completed within the given time limit.

double calculateTime(const vector<int> &dist, int speed)
{
    double totalTime = 0;
    for (size_t i = 0; i < dist.size(); i++)
    {
        if (i == dist.size() - 1)
        {
            // last road does not round up
            totalTime += (double)dist[i] / speed;
        }
        else
        {
            // round up for all other roads
            totalTime += ceil((double)dist[i] / speed);
        }
    }
    return totalTime;
}
int minSpeedOnTime(const vector<int> &dist, double timeLimit)
{
    int left = 1, right = 1e7; // Speed range
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (calculateTime(dist, mid) <= timeLimit)
        {
            result = mid;
            right = mid - 1; // Try for smaller speed
        }
        else
        {
            left = mid + 1; // Increase speed
        }
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    double t;
    cin >> t;
    vector<int> dist(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dist[i];
    }

    cout << minSpeedOnTime(dist, t) << endl;
    return 0;
}