#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        
        int byRow[n][n];
        int bycol[n][n];
        
        for(int i=0;i<n;i++)
        {
            int row = 0;
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='X')row++;
                else row =0;
                byRow[i][j] = row;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            int col = 0;
            for(int j=0;j<n;j++)
            {
                if(a[j][i]=='X')col++;
                else col = 0;
                
                bycol[j][i] = col;
            }
        }
        
        int res = 0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                int side = min(byRow[i][j] , bycol[i][j]);
                while(side > res)
                {
                    if(byRow[i-side+1][j] >= side and bycol[i][j-side+1] >=side)
                        res = side;
                    else
                        side--;
                }
            }
        }
        return res;
    }
};


int main()
{
    vector<vector<char>> v{
     {'X','X','X','O'},
     {'X','O','X','X'},
     {'X','X','X','O'},
     {'X','O','X','X'}
    };
    Solution s;
    cout<<s.largestSubsquare(4 , v);
    return 0;
}
