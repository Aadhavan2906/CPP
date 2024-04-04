#include <iostream>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {

        return b==0?a:getSum(a^b,(a&b)<<1);
        
    }
};
int main() {
    int a=10,b=5;
    Solution s;
    cout<<s.getSum(a,b);
    return 0;
    
}