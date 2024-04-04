#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maxProfit(vector<int>&price){
        vector<int> temp(price.size() , 0);
        int maxi = price[price.size()-1];
        for(int i=price.size()-2;i>=0;i--)
        {
            maxi = max(maxi , price[i]);
            temp[i] = max(temp[i+1],maxi-price[i]);
        }
        maxi = price[0];
        for(int i=1;i<price.size();i++)
        {
            maxi = min(maxi , price[i]);
            temp[i] = max(temp[i]+price[i]-maxi , temp[i-1]);
        }
        return temp[price.size()-1];
    }
};
int main()
{
    Solution s;
    vector<int> v({10,22,5,75,65,80});
    cout<<s.maxProfit(v);
  
}

