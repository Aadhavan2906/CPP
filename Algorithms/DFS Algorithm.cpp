#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[]  , int vis[] , int node)
{
    vis[node] = 1;
    cout<<node<<" ";
    for(auto i : adj[node])
        if(!vis[i])
            dfs(adj , vis , i);
}
int main()
{
    vector<int> adj[10] = {
        {1 , 2},
        {0 , 2,4,3},
        {1 , 0},
        {1,5},
        {1},
        {3,6,7,8},
        {5},
        {5,8},
        {5,7,9},
        {8}
    };
    int vis[10] = {0};
    dfs(adj , vis , 0);
}
