#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int shareA = a*b*0.01;
    int shareB = (a-shareA)*c*0.01;
    int shareC = (a - shareA - shareB)/3;
    printf("%d %d %d" , shareA,shareB,shareC);
    
}
