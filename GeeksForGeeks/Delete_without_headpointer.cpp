#include <bits/stdc++.h>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;

class Solution
{
    public:
    
    void deleteNode(Node *del_node)
    {
        while(head != NULL)
        {
            if(head != del_node)
            {
                cout<<head->data<<" ";
            }
            head = head->next;
        }
    }

};

int main()
{
    Solution s;
    Node *head = new Node(10);
    s.deleteNode(head);
}
