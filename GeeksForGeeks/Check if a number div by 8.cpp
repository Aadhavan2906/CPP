#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int DivisibleByEight(string s){
        string temp = "";
        if(s.size() > 3)
        {
            for(int i = s.size()-4 ; i < s.size();i++)
                temp+=s[i];
        }
        else temp = s;
        int num = stoi(temp);
        return (num%8==0)?1:-1;
    }
};


int main()
{
    Solution s;
    cout<<s.DivisibleByEight("54141111648421214584416464555");
}
