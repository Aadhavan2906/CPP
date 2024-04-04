#include<iostream>
#define concat(a,b) a##b
using namespace std;
int main()
{
    char a[10],b[10],arr[20];
    cin>>a>>b;
    int i=0;
    for(;a[i]!='\0';i++)
    {
        arr[i]=a[i];
    }
    for(int j=0;b[j]!='\0';j++)
    {
        arr[i]=b[j];
        i++;
    }
    cout<<arr;
}