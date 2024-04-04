#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    
    vector<int> Series(int n) {
        vector<int> ans(n+1 , 0);
        int i = 1  , mod = 1e9+7;
        while(n >= i)
        {
            if(i==1)
            {
                ans[i] = 1;
            }
            else
            {
                ans[i] = (ans[i-1] + ans[i-2]  ) % mod;
            }
            i++;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    for(auto i : s.Series(10) ) cout<<i<<" "; 
    return 0;
}
