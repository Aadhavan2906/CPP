#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestSubstring(string s, int n) {
    {
        vector<vector<int>> dp(n+1 , vector<int>(n+1 , 0));
        int index = 0 , length=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(j-i > dp[i-1][j-1] && s[i-1] == s[j-1] )
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    if(length < dp[i][j])
                    {
                        length = dp[i][j];
                        index = max(i , index);
                    }
                }
                else
                {
                    dp[i][j] =0;
                }
            }
        }
        string res="";
        for(int i=index-length+1;i<=index;i++)
            res+=s[i-1];
        return (res != "") ? res :"-1";
    }

}
};

int main()
{
    Solution s;
    cout<<s.longestSubstring( "abaabbbbbaa", 11);
}