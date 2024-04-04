#include<iostream>
using namespace std;
int main()
{
    int vow=0,cons=0;
    string s = "Hello world";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            vow++;
        else if(s[i]!=' ')
            cons++;

        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')vow++;
    }
    cout<<"Vowels : "<<vow <<" ";
    cout<<"Consonants : "<<cons;
}