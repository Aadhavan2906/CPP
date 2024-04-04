#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
       string temp;
       for(int i=0;i<r;i++)
       {
           temp = "";
           for(int j=0;j<s.size() && temp.size()<=n;j++)
           {
               if(s[j]=='0')temp+="01";
               else temp+="10";
           }
           s = temp;
       }
       return s[n];
    }
};

int main()
{
    Solution s;
    cout<<s.nthCharacter("1100" , 2 , 3);
    return 0;
}
