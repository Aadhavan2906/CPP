#include <iostream>

using namespace std;

int main()
{
    int yr,mon,leap;
    cin>>yr>>mon;
    switch(yr%4)
    {
        case 0:
            leap = 1;
            break;
        default:
            leap = 0;
    }
    switch (leap)
    {
        case 0:
            if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon ==10 || mon == 12) cout<<"Month : 31";
            if(mon==4 || mon==6 || mon==8 || mon==9 || mon ==11)  cout<<"Month : 30";
            if(mon==2)cout<<"Month : 28";
            break;
        case 1:
            if(mon==4 || mon==6 || mon==8 || mon==9 || mon ==11)  cout<<"Month : 30";
            if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon ==10 || mon == 12) cout<<"Month : 31";
            if(mon==2)cout<<"Month : 29";
            break;
            
    }
    
}
