#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int dec_to_bin(int num)
{
    if(num>0)
    {
        dec_to_bin(num/2);
        cout<<num%2;
    }
    return 0;
}

int main()
{
    int num;
    cin>>num;
   dec_to_bin(num);
    
}
