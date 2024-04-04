#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        set<int> st;
        int count =0;
        while(head1 != nullptr)
        {
            st.insert(x - head1->data);
            head1 = head1->next;
        }
        while(head2!=NULL)
        {
            if(st.find(head2->data) != st.end())
                count++;
            head2 = head2->next;
        }
        return count;
    }
};

int main()
{
    Solution s;
    cout<<s.countPairs();
    
}
