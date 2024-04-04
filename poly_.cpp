#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"HELLO WORLD \n"<<endl;
    int deg,x_val,sumVal=0;
    cout<<"Enter the degree of coefficient : ";
    cin>>deg;
    int sq = deg;
    cout<<"Enter the x value : ";
    cin>>x_val;
    int arr[deg+1];
    cout<<"Enter the co-efficient value : ";
    for(int i=0;i<=deg;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=deg;i++)
    {
        sumVal += arr[i]*pow(x_val,sq);
        sq--;
    }
    sq = deg;
    for(int i=0;i<=deg;i++)
    {
        cout<<arr[i]<<"X^"<<sq<<"+";
        sq--;
    }
    cout<<"The Co-efficient Value : "<<sumVal;
}
