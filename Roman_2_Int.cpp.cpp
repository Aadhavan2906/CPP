#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        string str="IVXLCDM"; 
        int arr[]={1,5,10,50,100,500,1000};
        int size = s.length()-1,key,cur=0,sum=0;
        while(size!=-1)
        {
            key = str.find(s[size]);
            cur = max(cur,key);
            if(key>=cur)
            {
                sum+=arr[key];
            }
            else
            {
                sum-=arr[key];
                cur = key;
            }
            size--;
        }
        return sum;
    }
};
int main()
{
    Solution s;
    cout<<s.romanToInt("MCMXCIV");
}
