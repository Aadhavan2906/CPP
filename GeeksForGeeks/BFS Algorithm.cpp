#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> result , vis;
        vis.resize(V , 0);
        queue<int> q;
        vis[0] = 1;
        q.push(0);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            result.push_back(node);
            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<int> adj[6] = {
        {1,2},
        {5},
        {4,3},
        {},
        {},
        {},
    };
    Solution s;
    vector<int> ans = s.bfsOfGraph(6 , adj);
    for(auto i : ans)cout<<i<<" ";
}
