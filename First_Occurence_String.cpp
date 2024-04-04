#include<bits/stdc++.h>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = haystack.length(),b = needle.length();
        int out = -1;
        bool present = false;
        for(int i=0;i<a;i++)
        {
            int c = i+b;
            if(haystack[i] == needle[0])
            {
                
                int j=i,k=0; out = i;
                
                while(j < c)
                {
                    if(needle[k]==haystack[j]){present = true;}else{present = false;  out = -1 ; break; };
                    j++;
                    k++;
                    cout<<haystack[j]<<"-" << needle[k]<<' ';
                }
            }
            if(present){return out;}
        }
        return -1;
    }
};
int main()
{
    Solution s;
    cout<<s.strStr("missisippi","sipp");
}