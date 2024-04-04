#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> bit;
    int count =0,rem;
    vector<int> countBits(int n) {
        
        if(n>0)
        {
        countBits(n-1);
        count =0;
        rem = n;
        while(rem>0)
        {
            if(rem%2==1){count++;}
            rem/=2;
        }
        bit.push_back(count);
        return bit;
        }
        bit.push_back(0);
        return bit;
        }
    
};

int main()
{
    Solution s;
    vector<int> v = s.countBits(5);
    for(int i=0;i<=5;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
