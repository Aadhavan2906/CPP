#include <iostream>
using namespace std;
int main()
{
    long double km,m,ft,inch,cm;
    cout<<"Enter the distance between two cities (in km) : ";
    cin>>km;
    m = km*1000;
    ft = km*3281;
    inch = km*39370;
    cm = km*100000;
    
    cout<<"Distance in meter : "<<m<<endl;
    cout<<"Distance in feet : "<<ft<<endl;
    cout<<"Distance in inch : "<<inch<<endl;
    cout<<"Distance in centimeter : "<<cm<<endl;
}