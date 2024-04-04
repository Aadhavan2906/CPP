#include<iostream>
using namespace std;
int main()
{
    string s = "malayalam";
    int i=0,j= s.length()-1;
    while(i <= j)
    {
        if(s[i] != s[j])
        {
            cout<<"This is Not a Palindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"This is palindrom";
}