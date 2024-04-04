#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        int start=0;
        while(start < n)
        {
            int x=start*2+1;
            if(x < n && arr[x] > arr[start])
                return false;
            x = start*2 + 2;
            if(x < n && arr[x] > arr[start])
                return false;
            start++;
        }
        return true;
    }
};

int main()
{
    Solution s;
    int arr[]= {0,5,4,3,2,1};
    cout<<s.isMaxHeap(arr,6);
}