#include <iostream>
#include<vector>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *fast,*slow;
        fast = slow = head;
        for(int i=0;i<n;i++)
        {
            fast = fast->next;
        }
        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
        
        }
};
void display(struct ListNode *&head)
{
    ListNode *ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->val<<" ";
        ptr = ptr->next;
    }
}
int main()
{
    ListNode *h1,*h2,*h3,*h4,*h5,*newHead;
    h1 = new ListNode(10,NULL);
    h2 = new ListNode(20,h1);
    h3 = new ListNode(30,h2);
    h4 = new ListNode(40,h3);
    h5 = new ListNode(50,h4);
    display(h5);
    Solution s;
    newHead = s.removeNthFromEnd(h5,2);
    cout<<endl;
    display(newHead);
    return 0;
}
