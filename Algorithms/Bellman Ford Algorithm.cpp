#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> dist(V , 1e8);
        dist[S] = 0;
        for(int i=0;i<V-1;i++)
        {
            for(auto v : edges)
            {
                int from = v[0];
                int to = v[1];
                int cost = v[2];
                
                if(dist[from]!=1e8 && dist[from] + cost < dist[to])
                    dist[to] = dist[from] + cost;
            }
        }
        for(int i=0;i<V-1;i++)
        {
            for(auto v : edges)
            {
                int from = v[0];
                int to = v[1];
                int cost = v[2];
                
                if(dist[from]!=1e8 && dist[from] + cost < dist[to])
                    return {-1};
            }
        }
        
        return dist;
    }
};

int main()
{
    vector<vector<int>> v = {
        {0 , 1 ,1},
        {1 , 0 ,1},
        {1 , 2 ,1}, 
        {2 , 1 ,1}, 
        {2 , 3 ,1}, 
        {3 , 2 ,1}, 
        {4 , 1 , 3},
        {4 , 1 , 3},
        {4 , 2 , 6},
        {2 , 4 , 6},
        {3 , 4 , 5},
        {4 , 3 , 5},
    };
    Solution s;
    for(auto i : s.bellman_ford( 5,v ,4 ))
        cout<<i<<" ";
}
