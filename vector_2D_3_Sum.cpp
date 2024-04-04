#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
        {
            return {};
        }
        if(nums[0]>0)
        {
            return {};
            
        }
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            if(i>0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int low = i+1,high = nums.size()-1,sum = 0;
            while(low<high)
            {
                sum = nums[i]+nums[low]+nums[high];
                if(sum>0)
                {
                    high--;
                }
                else if(sum<0)
                {
                    low++;
                }
                else
                {
                    result.push_back({nums[i],nums[low],nums[high]});
                    int low_occ = nums[low],high_occ = nums[high];
                    while(low<high && low_occ == nums[low])
                    {
                        low++;
                    }
                    while(low<high && high_occ == nums[high])
                    {
                        high--;
                    }
                }
            }
        }
        return result;
        
        
    }
};
void display(vector<vector<int>> r)
{
    for(auto &a:r)
    {
        for(auto &c:a)
        {
            cout<<c<<" ";
        }
        cout<<endl; 
    }
}
int main()
{
    Solution s;
    vector <int> v ={0,1,1};
    vector<vector<int>> result =  s.threeSum(v);
    display(result);
    return 0;
}