#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        int start=nums[0],end=nums[nums.size()-1];
        
        if(target>=start && target<=max)
        {
            for(int i=0;nums[i]!=max;i++)
            {
                if(nums[i]==target)
                {
                    return i;
                }
            }
        }
        if(target>=min&&target<=end)
        {
            for(int i=nums.size()-1;i>=0;i--)
            {
                if(nums[i]==target)
                {
                    return i;
                }
            }
        }
        return -1;
        
    }
};
int main()
{
    vector<int> v = {4,5,6,7,0,1,2};
    Solution s;
    cout<<s.search(v,6);
}