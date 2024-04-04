#include <iostream>

using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=0;i<32;i++)
        {
            if((n&(1<<i))!=0){count++;}
        }
        return count;
    }
};
int main()
{
  Solution s;
  cout<<s.hammingWeight(00000000000000000000000000001010);
  
    return 0;
}
