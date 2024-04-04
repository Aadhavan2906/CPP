#include <bits/stdc++.h>
using namespace std;
class Solution
{
	public:
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int ,int > , vector<pair<int ,int>> , greater<pair<int ,int >>> pq;
        vector<int> distance(V , 1e7);
        distance[S] = 0;
        pq.push({ 0 , S});
        while(!pq.empty())
        {
            int dist = pq.top().first;
            int Node = pq.top().second;
            pq.pop();
            for(auto it : adj[Node])
            {
                int edgeWeight = it[1];
                int adjNode = it[0];
                if(distance[adjNode] > dist + edgeWeight)
                {
                    distance[adjNode] = dist + edgeWeight;
                    pq.push({distance[adjNode] , adjNode});
                }
            }
        }
        return distance;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v[3] = {{{1, 1}, {2, 6}}, {{2, 3}, {0, 1}}, {{1, 3}, {0, 6}}};
    vector<int> dist = s.dijkstra(3 , v , 2);
    for(auto i : dist )
    {
        cout<<i<<" ";
    }
    return 0;
}
