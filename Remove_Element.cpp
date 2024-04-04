#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main()
{
    vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2};
    Solution s;
    cout << s.removeElement(v, 2);
    for (auto &num : v)
    {
        cout << " " << num;
    }
}