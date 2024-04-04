#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};

class Solution
{
    public:
    void sort(Node **head)
    {
        vector<int> v;
        while(*head != NULL)
        {
            v.push_back( (*head)->data);
            *head = (*head)->next;
        }
       std::sort(v.begin() , v.end());
        for(auto i : v)
        cout<<i <<" ";
    }
};


int main()
{ 
    Node *head = new Node(1);
    Node *two = new Node(9);
    Node *three = new Node(2);
    Node *four = new Node(8);
    Node *five = new Node(3);
    Node *six = new Node(7);
    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    Solution s;
    s.sort(&head);
}
