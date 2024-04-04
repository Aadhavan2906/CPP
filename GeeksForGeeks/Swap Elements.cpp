#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void swap(int arr[] , int i , int j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j] =temp;
    }
    void swapElements(int arr[], int n){
        
     for(int i=0;i<n;i+=2)
     {
         if(i+3 < n)
         swap(arr, i+1 , i+3);
         if(i+2 < n)
        swap(arr , i , i+2);
     }
    }
};

int main()
{
    int arr[] = {1 ,2 ,3 ,4 ,5};
    Solution s;
    s.swapElements(arr , 5);
}
