#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public :
    int solver(int i , int j ,int isTrue ,string &s , vector<vector<vector <int>>> &dp)
    {
        if(i > j)return 0;
        if(i==j)
        {
            if(isTrue)return s[i] == 'T';
            else return s[i] == 'F';
        }
        if(dp[i][j][isTrue] != -1)return dp[i][j][isTrue] ;
        int ways = 0;
        for(int index = i+1;index <= j-1;index+=2)
        {
            int leftTrue = solver(i , index-1,1 , s , dp);
            int leftFalse = solver(i , index-1,0 , s,dp);
            int rightTrue = solver(index+1 , j,1 , s,dp);
            int rightFalse = solver(index+1 , j,0 , s,dp);
            
            if(s[index] == '&')
            {
                if(isTrue)
                {
                    ways+= (leftTrue * rightTrue);
                }
                else{
                    ways+=leftTrue * rightFalse;
                    ways+=leftFalse * rightTrue;
                    ways+=leftFalse * rightFalse;
                }
            }
            else if(s[index] == '|')
            {
                if(isTrue)
                {
                    ways+=leftTrue * rightTrue;
                    ways+=leftFalse + rightTrue;
                    ways+=leftTrue * rightFalse;
                }
                else{
                    ways += leftFalse * rightFalse;
                }
            }
            else if(s[index] == '^')
            {
                if(isTrue)
                {
                    ways += leftFalse * rightTrue;
                    ways+=leftTrue * rightFalse;   
                }
                else{
                
                    ways+= leftTrue * rightTrue;
                    ways+=leftFalse * rightFalse;
                }
            }
        }
        
        return dp[i][j][isTrue] = ways;
        
    }
    int countWays(int n , string str)
    {
        vector<vector<vector<int> > > dp(n, vector<vector<int> >(n, vector<int>(2 , -1)));
        
        return solver(0 , n-1 , 1 ,str,dp);
        
        
    }
};
int main()
{
    Solution s;
    cout<<s.countWays(7,"T|T&F^T");
}