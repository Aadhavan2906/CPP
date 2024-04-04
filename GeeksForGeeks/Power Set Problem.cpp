#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	    void powerSet(string s , int i , int size , vector<string> &str , string temp)
	    {
	        if(i>=size)return;
	        temp+=s[i];
	       str.push_back(temp);
	        for(int j=i+1;j<size;j++)
	        {
	            powerSet(s , j , size , str , temp);
	        }
	        
	    }
		vector<string> AllPossibleStrings(string s){
		   int n = s.size();
		   vector<string> str;
		   string temp="";
		   for(int i=0;i<n;i++)
		     powerSet(s , i  , n , str,temp);
		   sort(str.begin() , str.end());
		   return str;
		}
};

f j jf jv jvf s sf sj sjf sjv sjvf sv svf v vf

int main()
{
    Solution s;
    vector<string> a = s.AllPossibleStrings("sjvf");
    for(auto i : a)cout<<i<<" ";
    return 0;
}
