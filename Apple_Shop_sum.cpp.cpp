#include <bits/stdc++.h>
using namespace std;

class Apple_Store
{
    public:
    
    int solution(int m1 , int m2 , int p1, int p2,int total)
    {
    int min_cost = 1000;
        for(int i=0;i*m1 <= total;i++)
        {
            if ((total - i*m1 )%m2== 0 )
                min_cost = min(min_cost , i*p1 + p2 * ((total - i*m1)/m2));
        }
        return min_cost;
    }
};

int main()
{
    int m1{3}, m2{4};
    int p1{10} , p2{15};
    Apple_Store as; 
    cout<<as.solution(m1,m2,p1,p2,19);
    return 0;
}