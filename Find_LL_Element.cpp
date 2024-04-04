#include <iostream>

using namespace std;

class Node
{
  public:
  int data;
  Node*link;
  Node(int d)
  {
      data = d;
      link = NULL;
  }
};

void Insert_Head(Node*&head,int data)
{
    if(head==NULL)
    {
        head = new Node(data);
        return;
    }
    Node *temp = new Node(data);
    temp->link = head;
    head = temp;
}
void display(Node*&head)
{
    Node*ptr = head;
    while(ptr!=NULL)
    {
    cout<<ptr->data<<" ";
    ptr = ptr->link;
    }
}
void search(Node*&head,int data)
{
    Node*ptr=head;
    int c= 1;
    while(ptr!=NULL)
    {
        if(ptr->data==data)
        {
            cout<<"The Element "<<data<<" is present at "<<c<<" position...!\n";
            return;
        }
        ptr = ptr->link;
        c++;
    }
    cout<<"The Element "<<data<<" is not found...!\n";
    return;
}
int main()
{
    Node *head;
    Insert_Head(head,10);
    Insert_Head(head,20);
    Insert_Head(head,30);
    Insert_Head(head,40);
    Insert_Head(head,50);
    Insert_Head(head,60);
    search(head,10);
    search(head,20);
    display(head);
    return 0;
}
