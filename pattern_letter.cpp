#include<iostream>
using namespace std;
int main()
{
    char a;
    int h=0;
    cout<<"Enter the Size : ";
    int size;
    cin>>size;
    for(int i=size;i>=0;i--)
    {
        a = 'A';
        for(int k=0;k<=i;k++)
        {
            cout<<a;
            a++;
        }
            if(i==size-1)
            {
                h++;
            }
            else if(i==size)
            {
                h=0;
            }
            else
            {
                h+=2;
            }
        for(int j=0;j<h;j++)
        {
            cout<<" ";
        }
        
        for(int k=0;k<=i;k++)
        {
            if(i==size&&k==0)
            {
                a--;
            }
            else
            {
                
            a--;
            cout<<a;
            }
            
        }
        cout<<"\n";
        
    }
}