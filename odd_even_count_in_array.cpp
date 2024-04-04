#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int num,odd=0,even=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0){even++;}
        if(arr[i]%2!=0){odd++;}
    }
    cout<<"Odd : "<<odd<<" ";
    cout<<"Even : "<<even;
}
