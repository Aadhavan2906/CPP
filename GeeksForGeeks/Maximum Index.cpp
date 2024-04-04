#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxIndexDiff(int a[], int n) 
    {
        int small[n] , large[n];
        int maxi = 0, mini = 1e9;
       
        for(int i=0;i<n;i++)
            small[i] = mini = min(mini , a[i]);
        
        for(int i=n-1;i>=0;i--)
            large[i] =  maxi = max(maxi , a[i]);
        int i=0,j=0;
        int ans=-1;
        while(i<n && j < n)
        {
            if(small[i] <= large[j])
            {
                ans = max(ans , j-i);
                j++;
            }
            else
                i++;
        }
        return ans;
    }
};


int main()
{
    Solution s;
    int arr[] = {15};
    cout<<s.maxIndexDiff(arr , 1);
}
