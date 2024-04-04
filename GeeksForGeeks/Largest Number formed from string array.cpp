#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    static bool comp(string a , string b)
    {
        string ab = a.append(b);
        string ba = b.append(a);
        return ab.compare(ba)>0?1:0;
    }
	string printLargest(int n, vector<string> &arr) {
	 sort(arr.begin() , arr.end() , comp);
	 for(auto i : arr)cout<<i;
	 return " ";  
	}
};

int main()
{
    vector<string> str = {"3", "30", "34", "5", "9"};
    Solution s;
    cout<<s.printLargest(5 , str);
}
