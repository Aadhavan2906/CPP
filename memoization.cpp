#include <bits/stdc++.h>
using namespace std;
#define N 10
vector<int> v(N);

int fib(int n)
{
    if (n <= 1)
    {
        v[n] = n;
        return v[n];
    }
    else
    {
        if (v[n - 2] == -1)
        {

            v[n - 2] = fib(n - 2);
        }
        if (v[n - 1] == -1)
        {
            v[n - 1] = fib(n - 1);
        }
        return v[n - 2] + v[n - 1];
    }
}

int main()
{
    for (auto &n : v)
    {
        n = -1;
    }
    fib(N);
    for (auto &n : v)
    {
        cout << n << " ";
    }
}