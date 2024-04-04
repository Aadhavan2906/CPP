#include <iostream>
using namespace std;

int* game_with_number(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
        arr[i] |= arr[i+1];
    return arr;
}


int main()
{
    int arr[] = {5, 9, 2, 6};
    game_with_number(arr  , 4); 
    for(int i : arr)
    cout<<i<<" ";
}