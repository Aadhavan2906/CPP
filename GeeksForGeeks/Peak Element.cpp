#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int low = 0 , high = n-1;
        if(n==1) return 0;
        while(low<=high)
        {
            int mid = (low + high)/2;
            if(mid==0 && arr[mid]>=arr[mid+1])
                return 0;
            else if(mid==n-1 && arr[mid]>=arr[mid-1])
                return n-1;
            else if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1])
                return mid;
            else
            {
                if(mid > 0 && arr[mid-1] > arr[mid])
                    high = mid -1;
                else 
                    low = mid+1;
            }
        }
        return 0;
    }
};


int main()
{
    Solution s;
    int arr[] = {1, 2, 3};
    cout<<s.peakElement(arr , 3);
    return 0;
}
