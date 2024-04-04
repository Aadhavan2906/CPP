#include <iostream>
#include<stack>
using namespace std;

class Solution {
    public:
        bool isValid(string s ){
            stack<char> stk;
            for(char c : s)
            {
                if(c == '(' || c == '{' || c== '[' )
                {
                    stk.push(c);
                }else
                {
       if(stk.empty() || (c == ')' && stk.top() !='(')|| (c == ']' && stk.top() !='[')|| (c == '}' && stk.top() !='{')) {return false;};
            stk.pop();
                }
            }
            return stk.empty();
        }
};
int main()
{
    Solution s;
    cout<<s.isValid("(){}{}{}");
    return 0;
}
