#include<iostream>
using namespace std;
int main()
{
    int size,zero=0,pos=0,neg=0;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)zero++;
        if(arr[i]>0)pos++;
        if(arr[i]<0)neg++;
    }
    cout<<"Zero : "<<zero<<" ";
    cout<<"Positives : "<<pos<<" ";
    cout<<"Negative : "<<neg<<" ";
}