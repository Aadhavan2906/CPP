#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int isPossible(vector<vector<int>>paths){
	   int n=paths.size(),count=0;
	   for(int i=0;i<n;i++)
	   {
	   count =0;    
	    for(int j=0;j<n;j++)
	        if(paths[i][j] == 1)count++;
	    if(count%2 == 1)return false;
	   }
	    return true;
	}
};
int main()
{
    Solution s;
    std::vector<vector<int>> v = {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,0},
        {1,1,0,0}
    };
    cout<<s.isPossible(v);
}