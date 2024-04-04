#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(target > nums[nums.size()/2])
        {
            for(int i=nums.size()-1 ; i>=nums.size()/2;i--)
            {
                if(target > nums[i])
                    return i+1;
                if(target == nums[i])
                    return i;
            }
        }
        if(target < nums[nums.size()/2])
        {
            for(int i=0;i<nums.size()/2;i++)
            {
                if(target <= nums[i])
                    return i;
            }
        }
        return nums.size()/2;

    }
};

int main()
{
    vector<int> v = {1,4,5,6,6};
    int target = 3;
    Solution s;
    cout<<s.searchInsert(v,target);
    
}