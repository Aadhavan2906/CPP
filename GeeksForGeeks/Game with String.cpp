#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minValue(string s, int k){
        if(s.size() < k)return -1;
        unordered_map<char , int> map;priority_queue<int> pq;
        for(auto i : s)map[i]++;
        for(auto m : map)pq.push(m.second);
        for(int i=1;i<=k;i++)
        {
            int top = pq.top();
            pq.pop();
            top--;
            if(top > 0)pq.push(top);
        }
        int ans = 0;
        while(!pq.empty())
        {
            ans+=(pq.top() * pq.top());
            pq.pop();
        }
        return ans;
        
    }
};
int main()
{
    Solution s;
    cout<<s.minValue("ccbcbd" , 3);
    return 0;
}
