
#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), left[n] , right[n];
        
        left[0]= prices[0];
        right[n-1] = prices[n-1];
        
        for(int i=1;i<n;i++)
        {
            left[i] = min(prices[i],left[i-1]);
        }
        for(int j=n-2;j>=0;j--)
        {
            right[j] = max(right[j+1],prices[j]);
        }
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,right[i]-left[i]);
        }
        return maxi;
                
    }
};

int main()
{
    Solution s;
    vector<int> a = {7,1,5,3,6,4};
    int b = s.maxProfit(a);
    cout<<b;
    return 0;
}
