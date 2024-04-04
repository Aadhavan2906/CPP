#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int mod = 1e9+7;
    int solver(vector<vector<int>> &dp, int i , int j , string s, string t )
    {
        if(t.size()==j)return 1;
        if(s.size()==i)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==t[j])
            return dp[i][j] = solver(dp , i+1 , j+1,s,t)%mod + solver(dp , i+1,j,s,t)%mod;
        
        return dp[i][j] = solver(dp, i+1,j,s,t)%mod;
    }
    int subsequenceCount(string s, string t)
    {
      int n = s.size();
      int m = t.size();
      vector<vector<int>> dp(n ,vector<int>(m , -1));
      return solver(dp , 0 , 0 , s , t)%mod;
    }
};
 
int main()
{
    vector<vector<int>> v = {
        {1,3},{2,3}
    };
    Solution s;
    cout<<s.subsequenceCount("babdcabaaabdc","adad");
    return 0;
}
