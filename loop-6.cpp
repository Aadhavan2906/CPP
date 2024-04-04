#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,it=2;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        cout<<it<<" ";
        it = it*2 -i;
    }
}
