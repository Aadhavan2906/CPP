#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num%3==0 or num%5==0 ) 
        cout<<"It is divisible by 3 and 5";
    else
        cout<<"It is not  divisible by 3 and 5";
}