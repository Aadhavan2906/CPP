#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<=right)
        {
            if(nums[left] == target)
            {
                return left;
            }
            if(nums[right] == target)
            {
                return right;
            }
            left++;
            right--;
        }
        return -1;
    }
};
int main()
{
    vector <int> v={9,10,11,12,-10,0,1};
    Solution s;
    cout<<s.search(v,1);
}