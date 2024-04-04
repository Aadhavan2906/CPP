#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        unordered_map<int , int> mp;
        for(int  i=0;i<n;i++)
        {
            mp[a[i]]++;
            for(auto m : mp)
                if(m.second==k)
                    return m.first;
            
        }
        return -1;
    }
};

int main()
{
    Solution s;
    int arr[] = {3, 1, 3, 4, 5, 1, 3, 3, 5, 4};
    cout<<s.firstElementKTime(10 , 3 , arr);
}
