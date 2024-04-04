#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int helper(int start, string s,set<string> &st)
    {
        if(start>=s.size())return 1;
        for(int i=start;i<s.size();i++)
        {
            string temp = s.substr(start , i - start + 1 );
            if(st.find(temp)!=st.end() and helper(i+1 , s , st )==1)
                return  1;
        }
        return 0;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
      set<string> setDict;
      for(auto i : dictionary)setDict.insert(i);
      return helper(0 , s , setDict);
    }
};
int main()
{
    vector<string> v = {"new" , "world"};
    Solution s;
    cout<<s.wordBreak(0 , "new" ,v);
    return 0;
}
