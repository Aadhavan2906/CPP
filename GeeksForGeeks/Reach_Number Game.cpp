#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long int count(long long int num)
    {
        vector<int> dp(num+1 , 0);
        dp[0] = 1;
        for(int i=3;i<=num;i++)
            dp[i] +=dp[i-3];
        
        for(int i=5;i<=num;i++)
            dp[i] +=dp[i-5];
            
        for(int i=10;i<=num;i++)
            dp[i] +=dp[i-10];
        
        return dp[num];
    }
};

int main()
{
    Solution s;
    cout<<s.count(20);
}