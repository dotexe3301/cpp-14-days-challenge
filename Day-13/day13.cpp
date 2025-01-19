#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
const int INF = INT_MAX;
vector<int> dijkstra(int n, vector<vector<pair<int, int>>> &graph, int start)
{
    vector<int> dist(n, INF); // distance array
    dist[start] = 0;
    // min-heap to store {distance, node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});
    while (!pq.empty())
    {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        // ignore outdated entries
        if (d > dist[u])
            continue;
        // relax edges
        // that is update the distance to the neighbor node if it is smaller than the current distance
        for (auto [v, w] : graph[u])
        {
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    // replace INF with -1 for unreachable nodes
    for (int &d : dist)
    {
        if (d == INF)
            d = -1;
    }
    return dist;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
    }
    int start;
    cin >> start;
    vector<int> result = dijkstra(n, graph, start);
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
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