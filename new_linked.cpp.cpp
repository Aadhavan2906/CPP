#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* link;
    Node(int d)
    {
        data = d;
    }
};
void InsertAtHead(Node* &head,int data)
{
    Node *temp;
    temp = new Node(data);
    temp->link = head;
    head = temp;
}
void InsertAttail(Node*&head,int data)
{
    Node *temp,*ptr;
    ptr = head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    temp = new Node(data);
    ptr->link = temp;
}

void InsertAtPos(Node*&head,int pos,int data)
{
    if(pos==1)
    {
        InsertAtHead(head,data);
        return;
    }
    pos--;
    Node *temp,*ptr;
    ptr = head;
    while(--pos!=0)
    {   
        ptr = ptr->link;
    }
    temp = new Node(data);
    temp->link = ptr->link;
    ptr->link = temp;
    
}

void DeleteAtHead(Node*& head)
{
    Node* ptr = head;
    ptr = ptr->link;
    head->link = NULL;
    delete(head);
    head = ptr;
}
void DeleteAtTail(Node *&head)
{
    Node* ptr = head,*temp=head;
    while(temp->link!=NULL)
    {
        ptr = temp;
        temp = temp->link;
    }
    ptr->link=NULL;
    delete(temp);
    
}
void DeleteAtPos(Node*&head,int pos)
{
    Node* ptr,*temp;
    ptr = temp = head;
    if(pos==1)
    {
        DeleteAtHead(head);
        return;
    }
    while(--pos!=0)
    {
        ptr = temp;
        temp = temp->link;
    }
    ptr->link = temp->link;
    delete(temp);
    
    
}
void display(Node*&head)
{
    Node *ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
}
int main()
{
    Node *head;
    head = new Node(10);
    InsertAtHead(head,20);
    InsertAtHead(head,50);
    InsertAttail(head,60);
    InsertAttail(head,70);
    InsertAtPos(head,5,22);
    DeleteAtHead(head);
    DeleteAtTail(head);
    display(head);
    cout<<"\n";
    DeleteAtPos(head,3);
    display(head);
    
    
}
