#include <iostream>
using namespace std;
void removeDuplicate(int size, int *arr)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (*(arr + i) == *(arr + j))
      {
        for (int k = j; k < size; k++)
        {
          *(arr + k) = *(arr + (k + 1));
        }
          size--;
      }
    }
  }
  for (int i = 0; i < size; i++)
  {
    cout << *(arr + i) << " ";
  }
}
int main()
{
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  removeDuplicate(size, arr);
}
