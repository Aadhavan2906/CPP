#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int num,val1=10,val2=5;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
        cout<<val1<<" ";
        val1 = val1+50;
        }
        if(i%2==0)
        {
        cout<<val2<<" ";
        val2 = val2+10;
            
        }
    }
    
}
