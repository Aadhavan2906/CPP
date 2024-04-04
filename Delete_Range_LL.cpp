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
void delete_range(Node*head,int p1,int p2)
{
    Node *ptr1,*ptr2,*ptr3;
    ptr1 = ptr2 =ptr3 =  head;
    int p3;
    if(p1>p2)
    {
           p3 = p1;
           p1 = p2;
           p2 = p3;
    }
    while(--p1!=1)
    {
        ptr1= ptr1->link;
        if(ptr1==NULL)
        {
            cout<<"It is not a possible Position to delete...!\n";
            return;
        }
    }
    while(--p2!=0)
    {
        ptr2= ptr2->link;
        if(ptr2==NULL)
        {
            cout<<"It is not a possible Position to delete...!\n";
            return;
        }
    }
    ptr1->link = ptr2->link;

}
int main()
{
    Node *head;
    Insert_Head(head,10);
    Insert_Head(head,20);
    Insert_Head(head,30);
    Insert_Head(head,40);
    Insert_Head(head,50);
    delete_range(head,4,2);
    cout<<endl;
    display(head);
    return 0;
}
