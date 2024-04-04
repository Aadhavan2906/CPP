
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main()
{
    vector <int> v={1,1,3,4,4};
    Solution s;
    cout<<s.removeDuplicates(v);
    return 0;
}
