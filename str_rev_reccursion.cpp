#include <iostream>

void rev(std::string a,int i )
{
    if(a[i]!='\0')
    {
        rev(a,++i);
        std::cout<<a[--i];
    }
}

int main()
{
    std::string a;
    getline(std::cin,a);
    rev(a,0);
    
}