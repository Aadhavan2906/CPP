#include <iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int minElement(vector<int> nums)
    {
        return *min_element(nums.begin(),nums.end());
    }
};

int main()
{
    vector <int> v={9,10,11,-10,0,1};
    Solution s;
    cout<<s.minElement(v);
}