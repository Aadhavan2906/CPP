#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	string removeDuplicates(string str) {
        map<char , int> mp;
        string temp="";
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
            if(mp[str[i]]<=1)
                temp+=str[i];
        }
        return temp;
	}
};

int main()
{
    Solution s;
    cout<<s.removeDuplicates("geEksforGEeks");
    return 0;
}
