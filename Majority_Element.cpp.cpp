#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0,ele = 0;
        for(int i=0;i<nums.size();i++)
            if(c == 0 ){ c++; ele = nums[i];}
            else if(ele == nums[i])c++;
            else c--;
        return ele;   
    }
};
int main()
{
  vector<int> v = {1,2,2,3,5,2,2,2};
  Solution s;
  cout<<s.majorityElement(v);
    return 0;
}