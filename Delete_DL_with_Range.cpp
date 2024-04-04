#include <iostream>

using namespace std;

class Node
{
  public:
  int data;
  Node*left,*right;
  Node(int d)
  {
      data = d;
      left =right = NULL;
  }
};

void Insert_Head(Node*&head,Node*&tail,int data)
{
    if(head==NULL)
    {
        head = new Node(data);
        tail =head;
        return;
    }
    Node *temp = new Node(data);
    temp->right = head;
    head->left = temp;
    head = temp;
}
void display(Node*&head)
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->right;
    }
}
void search(Node*&head,int data)
{
    Node*ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==data)
        {
            cout<<"The Element is found..!\n";
            return;
        }
        ptr = ptr->right;
    }
    cout<<"The Element is not found.....!\n";
    return;
}

void Delete_Range(Node*&head,Node*&tail,int p1,int p2)
{
    Node*ptr1 = head;
    Node*ptr2 = head;
    while(--p1!=0)
    {
        ptr1 = ptr2->right;
    }
    cout<<ptr1->data<<" ";
    while(--p2!=0)
    {
        ptr2 = ptr2->right;
    }
    cout<<ptr2->data<<" ";
    
    ptr1->right = ptr2;
    ptr2->left = ptr1;
}

int main()
{
    Node *head,*tail;
    tail = head =NULL;
    Insert_Head(head,tail,10);
    Insert_Head(head,tail,20);
    Insert_Head(head,tail,30);
    Insert_Head(head,tail,40);
    Insert_Head(head,tail,50);
    Delete_Range(head,tail,1,5);
    cout<<endl;
    display(head);
    
}
