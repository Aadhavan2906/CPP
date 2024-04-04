#include<iostream>
using namespace std;
int main()
{
    int num,ans=0;
    cin>>num;
    while(num > 0)
    {
        ans = ans*10 + num%10;
        num = num/10;
    }
    cout<<ans;
}