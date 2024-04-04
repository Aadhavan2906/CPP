#include<iostream>
using namespace std;
int main()
{
    double angle,tot_angle=0;
    int n=1;
    while(n<=3)
    {
        cout<<"Enter the angle "<<n<<": ";
        cin>>angle;
        tot_angle+=angle;
        n++;
    }
    if(tot_angle==180)
    {
        cout<<"The triangle is valid : "<<tot_angle;
    }
    else
    {
        cout<<"The triangle is not valid : "<<tot_angle;
    }
}