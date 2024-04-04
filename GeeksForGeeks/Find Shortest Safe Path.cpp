#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int check(int i , int j , vector<vector<int>> &mat)
    {
        if(i-1>=0 && mat[i-1][j] == 0)return 0;
        if(j-1>=0 && mat[i][j-1] == 0)return 0;
        if(i+1<mat.size() && mat[i+1][j] == 0)return 0;
        if(j+1<mat[0].size() && mat[i][j+1] == 0)return 0;
    
        return 1;    
    }
    int solver(int i , int j , vector<vector<int>> &mat , vector<vector<int>> &vis)
    {
        if( i >= 0 && i < mat.size() && j >=0 && j <= mat[0].size() &&vis[i][j] == 0 && check(i , j , mat))
        {
            vis[i][j] = 1;
            int left = solver(i , j-1 , mat , vis);
            int down = solver(i-1 , j , mat , vis);
            int up = solver(i+1 , j , mat , vis);
            if(left!=INT_MAX)left+=mat[i][j];
            if(down!=INT_MAX)down+=mat[i][j];
            if(up!=INT_MAX)up+=mat[i][j];
            
            vis[i][j] = 0;
            
            return min(left , min(up , down));
        }
        return INT_MAX;
    }
    int findShortestPath(vector<vector<int>> &mat)
    {
        int row = mat.size(), col = mat[0].size();
        int mini = INT_MAX;
        vector<vector<int>> vis(row , vector<int>(col , 0));
        for(int i=0; i<row ;i++)
            mini = min(mini , solver(i , col-1 , mat , vis));
        if(mini == INT_MAX)
            return -1;
        
        return mini;
            
    }
};

int main()
{
    vector<vector<int>> v{
        {1, 0, 1, 1, 1},
      {1, 1, 1, 1, 1},
      {1, 1, 1, 1, 1},
      {1, 1, 1, 0, 1},
      {1, 1, 1, 1, 0}
    };
    Solution s;
    cout<<s.findShortestPath(v);
}
