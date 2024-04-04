#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double med;
        for(auto n2:nums2)nums1.push_back(n2);
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==0){med = nums1[(nums1.size()/2)-1] + nums1[(nums1.size()/2)]; return med/2;}
        else med = nums1[nums1.size()/2];
        return med;
    }
};
int main()
{
    Solution s;
    vector<int> v1= {1,3};
    vector<int> v2 = {2};
    cout<<s.findMedianSortedArrays(v1,v2);
    
    return 0;
}
