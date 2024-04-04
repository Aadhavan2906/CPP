#include <iostream>

using namespace std;

int main()
{
    int hrs,hmin;
    double convHrs,min;
    cout<<"Enter the hours (24hrs) : ";
    cin>>hrs>>hmin;
    if(hrs<=24)
    {
        convHrs = hrs%12;
        if(convHrs == 0)
        {
            convHrs = 12;
        }
        if(hrs<convHrs|| hrs == 24)
        {
            cout<<convHrs<<":"<<hmin<<" A.M" << " Good Morning....! " ;
        }
        else
        {
            cout<<convHrs<<":"<<hmin<<" P.M" << " Good Evening....! ";
            
        }
    }
    
}
