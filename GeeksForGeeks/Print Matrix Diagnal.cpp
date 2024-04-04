#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {   
        int n = mat[0].size();
        vector<int> ans;
        int row=0, col=0;
        while( ans.size() < n* n)
        {
            while( row >= 0 && col < n )
            {
                if(row >= 0 && col >= 0 && row < n && col < n )
                {
                    ans.push_back(mat[row][col]);
                    mat[row][col] = 1e9;
                }
                col++;
                row--;
            }
            if(ans.size() == n*n)break;
            
            row = max(row , 0 );
            col = min(col , n-1 );
            
            while(mat[row][col]==1e9)
            row++;
            
            
            
            while( col >= 0 && row < n )
            {
                if(row >= 0 && col >= 0 && row < n && col < n )
                {
                    ans.push_back(mat[row][col]);
                    mat[row][col] = 1e9;
                }
                row++;
                col--;
            }
            if(ans.size() == n*n)break;
            
            row = min(row , n-1 );
            col = max(col , 0 );
            
            while(mat[row][col]==1e9)
            col++;
            
                
        }
        for(auto i : ans)
            std::cout << i << " ";
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> mat = {
           {1, 2, 3},
           {4, 5, 6},
           {7, 8, 9}
    } ;
    s.matrixDiagonally(mat);
    return 0;
}
