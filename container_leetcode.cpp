#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i=0,j=height.size()-1;
        int ans=0;
        while(i<j)
        {
            ans = max(ans,min(height[i],height[j])*(j-i));
            if(height[i]<=height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
        }
        return ans;
    }
};



int main()
{
    vector<int> v = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout<<s.maxArea(v);

    return 0;
}