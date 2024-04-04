#include <bits/stdc++.h>

using namespace std;

int main()
{
    double r,h,hr,tot;
    cin>>r>>h>>hr>>tot;
    double area = 3.14*r*r*h;
    if(area < tot*hr)
    {
    cout<<"Within";
        
    }
    else
    {
        cout<<"Time Exceeds";
    }
    
}
