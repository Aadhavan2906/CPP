#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int one=0,n=nums.size();
        
        int tot = (n*(n+1))/2;
        for(auto &num:nums)
        {
            tot-=num;
        }
        return tot;
        
    }
};
int main()
{
    Solution s;

    vector<int> v={0,2,3,4};
    cout<<s.missingNumber(v);
    return 0;
}   