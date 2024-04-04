#include <bits/stdc++.h>
using namespace std;

class Solution{

public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> newStack;
        while(!st.empty())
        {
            newStack.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!newStack.empty())
        {
            st.push(newStack.top());
            newStack.pop();
        }
        return st;
    }
};


int main()
{
    Solution s;
    stack<int> ip;
    ip.push(4);
    ip.push(3);
    ip.push(2);
    ip.push(1);
    ip.push(8);
    stack<int> st = s.insertAtBottom(ip , 2);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
