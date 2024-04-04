#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int k)  {
        vector<pair<int , int>> adjNode[n];
        for(auto it : flights)
            adjNode[it[0]].push_back({it[1] , it[2]});
            
        queue<pair<int ,pair<int , int>>> q;
        q.push({0 , {src , 0}});
        vector<int> dist(n , 1e9);
        dist[src] = 0;
        
        while(!q.empty())
        {
            auto it = q.front();
            int stop = it.first;
            int node = it.second.first;
            int cost = it.second.second;
            q.pop();
            
            if(stop > k) continue;
            for(auto i : adjNode[node])
            {
                int adjnode = i.first;
                int edjW = i.second;
                if(edjW + cost < dist[adjnode] && stop<=k)
                {
                    dist[adjnode] = cost + edjW;
                    q.push({stop+1 , {adjnode , dist[adjnode]}});
                }
            }
        }
        
        if(dist[dst]==1e9)return -1;
        return dist[dst];
        
    }
};
int main()
{
    Solution s;
    vector<vector<int>> v = {
        {0,1,100},
        {1,2,100},
        {2,0,100},
        {1,3,600},
        {2,3,200},
    };
    cout<<s.CheapestFLight(4 , v , 0 , 3  , 1);
}
