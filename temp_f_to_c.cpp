#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double faren,cel;
    cout<<"Enter the Farenheit : ";
    cin>>faren;
    cel = (faren-32)/1.8;
    cout<<"Celsius : "<<setprecision(5)<<cel;
}