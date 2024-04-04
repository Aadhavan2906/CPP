#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int dijk(int i , int n ,vector<pair<int , int>> route[] , int k)
    {
        priority_queue<int> q;
        q.push(i);
        vector<int> dist(n , 1e9);
        dist[i] = 0;
        while(!q.empty())
        {
            int node = q.top();
            q.pop();
            for(auto p : route[node])
            {
                int next = p.first;
                int weight = p.second;
                if(dist[next] > dist[node] + weight)
                {
                    dist[next] = dist[node] + weight;
                    q.push(next);
                }
            }
        }
        int c = 0;
        for(int i = 0;i<n;i++)
            if(dist[i] <= k)
             c++;
        
        return c;
    }
    int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
        vector<pair<int , int>> route[n];
        for(int i=0;i<m;i++)
        {
            route[edges[i][0]].push_back({edges[i][1] , edges[i][2]});
            route[edges[i][1]].push_back({edges[i][0] , edges[i][2]});
        }
        vector<int> dist(n , 0);
        for(int i=0;i<n;i++)
        {
            dist[i] = dijk(i , n , route , distanceThreshold );
        }
        int ans = INT_MAX , minInd = -1;
        for(int i=0;i<n;i++)
        {
            if(ans >= dist[i])
            {
                ans = dist[i];
                minInd = i;
            }
        }
        return minInd;
    }
};

int main()
{
    vector<int> v{1 , 2 , 3 ,2 ,2};
    Solution s;
    cout<<s.maxSubarrayLength(v , 2);
}
