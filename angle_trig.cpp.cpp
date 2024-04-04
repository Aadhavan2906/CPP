#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double angle;
    cout<<"Enter the angle : ";
    cin>>angle;
    double Sin=sin(angle);
    double Cos=cos(angle);
    double Tan=tan(angle);
    double Cosec=1/Sin;
    double Sec=1/Cos;
    double Cot=1/tan(angle);
    
    cout<<"Sin : "<<setprecision(4)<<Sin<<endl;
    cout<<"Cos : "<<setprecision(4)<<Cos<<endl;
    cout<<"Tan : "<<setprecision(4)<<Tan<<endl;
    cout<<"Cosec : "<<setprecision(4)<<Cosec<<endl;
    cout<<"Sec : "<<setprecision(4)<<Sec<<endl;
    cout<<"Cot : "<<setprecision(4)<<Cot<<endl;
    
}