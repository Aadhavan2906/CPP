#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        cout<<n<<endl;
        int result =0;
        for(int i=0;i<32;i++)
        {
            result <<=1;
            result |= (n&1); 
            n>>=1;
        }
        return result;
    }
};
int main()
{
    Solution s;
    cout<<s.reverseBits(2147483648);
    
    
}