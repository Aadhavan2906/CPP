#include<iostream>
using namespace std;
int main()
{
    string s="This Is A Computer";
    int upper=0,lower=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97 && s[i]!=' ')
            lower++;
        if(s[i]<97 && s[i]!=' ')
             upper++;
    }
    cout<<"Upper : "<<upper<<endl ;
    cout<<"Lower : "<<lower;
}
