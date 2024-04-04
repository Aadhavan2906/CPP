#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    int count =0;
	    int i=0;
	    int r1=0, r2 = n-1;
	    int c1=0, c2 = n-1;
	    
	    while(r1 < n && r2 >= 0)
	    {
	        int sum = mat1[r1][c1] + mat2[r2][c2];
	        if(sum == x)
	        {
	            count++;
	            c1++;c2--;
	        }
	        else if(sum > x) c2--;
	        else if(sum < x) c1++;
	        
	        if(c1 >= n)
	        {
	            c1 = 0;
	            r1++;
	        }
	        if(c2 < 0)
	        {
	            c2 = n-1;
	            r2--;
	        }
	        
	    }
	    return count;
	}
};


int main()
{
    vector<vector<int>> v1 = {{1, 5, 6},
        {8, 10, 11},
        {15, 16, 18}};
    vector<vector<int>> v2 ={{2, 4, 7},
        {9, 10, 12},
        {13, 16, 20}};
    Solution s;
    cout<<s.countPairs(v1 , v2 , 3 , 21);
    

    return 0;
}
