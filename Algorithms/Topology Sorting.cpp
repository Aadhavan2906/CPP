#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
    
    void dfs(int node,int vis[] , vector<int>adj[] , stack<int> &st)
    {
        vis[node] = 1;
        for(auto i : adj[node])
            if(!vis[i]) dfs(i , vis , adj , st);
        st.push(node);
    }
    
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V] = {0};
	    stack<int> st;
	    for(int i=0;i<V;i++)
	        if(!vis[i])
	            dfs(i , vis , adj , st);
	   vector<int> result;
	   while(!st.empty())
	   {
	       result.push_back(st.top());
	       st.pop();
	   }
	   return result;
	}
};


int main()
{
    vector<int> adj[] = {
        {},
        {3},
        {3},
        {},
        {0},
        {0,2},
    };
    Solution s;
    vector<int> ans = s.topoSort(6 , adj);
    for(auto i : ans)cout<<i<<" ";
}
