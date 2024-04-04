#include <bits/stdc++.h>
using namespace std;

class GridTravel
{
public:
    int count = 0;
    void gridTraveller(int start, int end)
    {
        if (start > 0 and end > 0)
        {
            gridTraveller(start - 1, end);
            gridTraveller(start, end - 1);
        }
        if (start == 1 and end == 1)
        {
            count++;
        }
    }
};

int main()
{
    GridTravel g;
    g.gridTraveller(6, 5);
    cout << g.count;
}