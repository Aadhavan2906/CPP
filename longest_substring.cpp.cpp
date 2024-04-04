#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int dp[s.length()][s.length()];
        memset(dp,-1,sizeof dp);
        int longest = 1,start = 0,count = 1;
        for(int i=1;i<=s.length();i++)
        {
            for(int j=0;j+i-1<s.length();j++)
            {
                if(i==1){dp[j][j] = 1;}
                else if(i==2 && s[j] == s[j+1])
                {dp[j][j+1] = 2;longest = 2;start = j;count = 2;}
                else if(s[j] == s[j+i-1] && dp[j+1][j+i-2] != -1)
                {
                    dp[j][j+i-1] = dp[j+1][j+i-1] + 2;
                    longest = dp[j][j+i-1];
                    start = j;
                    count = i;
                }
            }
        }
        return s.substr(start,count);
    }
};

int main()
{
    string str = "mmaddamm|racecar|";
    Solution s;
    cout<<s.longestPalindrome(str);

    return 0;
}
