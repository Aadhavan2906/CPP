#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int row = obstacleGrid.size();
       int col = obstacleGrid[0].size();
       int dp[row][col];
       memset(dp,0,sizeof dp);
       bool flag = false;
       for(int i=0;i<row;i++)
        {
            if(flag || obstacleGrid[i][0]==1){flag = true; dp[i][0] = 0;}
            else dp[i][0] = 1;
        }
        flag = false;
       for(int i=0;i<col;i++)
        {
            if(flag || obstacleGrid[0][i]==1){flag = true; dp[0][i] = 0;}
            else dp[0][i] = 1;
        }
        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                if(obstacleGrid[i][j] == 1)dp[i][j]=0;
                else dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[row-1][col-1];
    }
    
};
int main()
{
    Solution s;
    vector<vector<int>> v = {
        {0,0,0},
        {0,1,0},
        {0,0,0},
        {0,0,0},
        
    };
    cout<<"The Number of Ways to Reach Destination : "<<s.uniquePathsWithObstacles(v);
}
