// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int merge(int arr[],int l,int mid,int r)
{
    int size = (r-l)-1;
    int i=l,j=mid+1,k=l,temp[size];
    
    while(i<=mid&&j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k] = arr[i];
            i++;k++;
        }
        else
        {
            temp[k]= arr[j];
            j++;k++;
        }
    }
        while(i<=mid)
        {
            temp[k] = arr[i];
            i++;k++;
        }
        while(j<=r)
        {
            temp[k] = arr[j];
            j++;k++;
        }
        for(int a=l;a<=r;a++)
        {
            arr[a] = temp[a];
        }
        
}

void mergesort(int arr[],int l,int r)
{
   if(l<r)
   {
       int mid = (l+r)/2;
       mergesort(arr,l,mid);
       mergesort(arr,mid+1,r);
       merge(arr,l,mid,r);
   }
}

int main() {
    int arr[]={1,10,2,5,8};
    int l=0,r=4;
    
    mergesort(arr,l,r);
    
    for(int i=l;i<=r;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
    
}