#include <iostream>

using namespace std;

int main()
{
    int user,bot,match=21;
    while(1)
    {
        cout<<"Total Match-Stick : "<<match<<endl;
        cout<<"Enter the Number of Match Stick to take (1 to 4) : ";
        cin>>user;
        if(user<=0||user>=5)
        {
            continue;
        }
        match -=user;
        bot = 5-user;
        cout<<"The Computer takes : "<<bot<<endl;
        match -=bot;
        if(match==1)
        {
            cout<<"The Remaining Match Stick : "<<match<<endl;
            cout<<"You Lost.....!";
            break;
        }
    }
    return 0;
}
