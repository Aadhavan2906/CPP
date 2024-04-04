#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    double d1,d2;
    int c1,c2;
    cin>>d1>>c1>>d2>>c2;
    int rem = (c1+c2)/100;
    double tot = d1+d2+ rem;
    cout<<tot<<" "<<(c1+c2)%100;
    
}
