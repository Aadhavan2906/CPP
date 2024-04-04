#include<iostream>
using namespace std;
int main()
{
    float prize=0;
    int num,item;
    cout<<"Enter number of item : ";
    cin>>num;
    while(num>0)
    {
    cout<<"Enter item prize : ";
    cin>>item;
    prize+=item; 
    num--;
    }
    if(prize>=1000)
    {
        cout<<"You have purchased >1000 with 10% descount : "<<prize - (prize*0.1);
    }
}