#include<algorithm>
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,5,3,2,90,2};
    sort(begin(arr),end(arr));
    for(auto &a:arr)
        cout<<a<<" ";

    return 0;
}
