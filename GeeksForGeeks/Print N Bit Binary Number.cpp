#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
    void solver(vector<string> &dp , string cur ,int one , int zero , int n )
    {
        if(one < zero)return;
        if(cur.size() == n){
            dp.push_back(cur);
            return;
        }
        
        solver(dp , cur+"1" , one+1 , zero , n);
        solver(dp , cur+"0" , one , zero+1 , n);
        return;
    }
	vector<string> NBitBinary(int n)
	{
	    vector<string> dp; 
	    solver( dp , "" , 0 , 0 , n);
	    return dp;
	}

};


int main()
{
    Solution s;
    for(auto i : s.NBitBinary(3))
        cout<<i<<" ";
}
