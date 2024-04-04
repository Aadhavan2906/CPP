#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int solver(int n , vector<int> &dp)
        {
            if(dp[n]!=-1)return dp[n];
            if(n != 1 && n!=0)
            {
               dp[n/2] =  solver(n/2 , dp);
               dp[n/3] = solver(n/3 , dp) ;
               dp[n/4] = solver(n/4 , dp);
               dp[n] = dp[n/2] + dp[n/3] + dp[n/4];
               return max(n , dp[n]);
            }
            return dp[n] = n;
        }
        int maxSum(int n)
        {
            if(n==0)return n;
            vector<int> dp(n+1 , -1);
            return solver(n , dp);
        }
};

int main()
{
    Solution s;
    cout<<s.maxSum(1200);
}