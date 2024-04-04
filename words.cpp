#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="this is a computer";
    int space=0,i=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
            space++;
    }
    cout<<++space;    
}