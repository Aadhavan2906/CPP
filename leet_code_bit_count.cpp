#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> bit;
    int count =0,rem;
    vector<int> countBits(int n) {
        vector<int> t(n+1);
        t[0]=0;
        for(int i=1;i<=n;i++)
        {
            #include <iostream>
#include <vector>
using namespace std;t
            [i] = t[i/2] + i%2;
        }
        return t;
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