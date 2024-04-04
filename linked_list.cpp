#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
  int data;
  struct Node *link;
};

void add_elements_at_begin(Node **head,int data)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->link = *head;
    *head = temp;
    
}

void add_elements_at_end(Node **head,int data)
{
    struct Node *temp,*ptr;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    ptr = *head;
    while(ptr->link!=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void add_elements_with_pos(Node **head,int pos,int data)
{
    if(pos==1)
    {
        add_elements_at_begin(head,data);
    }
    else{
    struct Node *temp,*ptr;
    ptr = *head;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    pos--;
    while(pos>1)
    {
        ptr=ptr->link;
        pos--;
    }
    temp->link=ptr->link;
    ptr->link = temp;
    }
    
}
void delete_element_at_begin(Node **head)
{
    struct Node *ptr;
    ptr = (*head)->link;
    (*head)->link = NULL;
    free(*head);
    *head = ptr;
}
void delete_element_at_end(Node **head)
{
    struct Node *ptr,*temp;
    ptr = *head;
    temp = *head;
    if(ptr->link==NULL)
    {
        delete_element_at_begin(head);
    }
    else
    {
        
    while(temp->link!=NULL)
    {
        ptr = temp;
        temp = temp->link;
    }
    ptr->link =NULL;
    free(temp);
    }
}
void delete_element_with_pos(Node **head,int pos)
{
    struct Node *ptr,*temp;
    ptr = temp = *head;
    if(pos==1)
    {
        delete_element_at_begin(head);
    }
    else
    {
        
        while(pos>1)
        {
            ptr = temp;
            temp = temp->link;
            pos--;
        }
        ptr->link = NULL;
        ptr->link = temp->link;
        free(temp);
    }
}
void delete_linked_list(Node **head)
{
    struct Node *ptr;
    ptr = *head;
    while(ptr!=NULL)
    {
        *head = (*head)->link;
        free(ptr);
        ptr = *head;
    }
}
void display_list(Node **head)
{
    struct Node *ptr;
    ptr = *head;
    cout<<"The Linked List Elements are : ";
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<<"\n";
}

int main()
{
    struct Node *head=NULL;
    int num,data,pos;
    head = (struct Node*)malloc(sizeof(struct Node));
    cout<<"Enter the data to create List : ";
    cin>>head->data;
    cout<<"The List : "<<head->data<<"\n";
    do
    {
        cout<<"1.Add Element at Begin\n";
        cout<<"2.Add Element at End\n";
        cout<<"3.Add Element with pos\n";
        cout<<"4.Delete Element at Begin\n";
        cout<<"5.Delete Element at End\n";
        cout<<"6.Delete Element with pos\n";
        cout<<"7.Delete Linked List\n";
        cout<<"8.Display Elements in List\n";
        cout<<"9.Exit\n";
        cout<<"\nEnter your choice : ";
        cin>>num;
        switch(num)
        {
            
            case 1:
            cout<<"Enter the Value : ";
            cin>>data;
            add_elements_at_begin(&head,data);
            break;
            case 2:
            cout<<"Enter the Value : ";
            cin>>data;
            add_elements_at_end(&head,data);
            break;
            case 3:
            cout<<"Enter the position to add Element : ";
            cin>>pos;
            cout<<"Enter the Element : ";
            cin>>data;
            add_elements_with_pos(&head,pos,data);
            break;
            case 4:
            delete_element_at_begin(&head);
            break;
            case 5:
            delete_element_at_end(&head);
            break;
            case 6:
            cout<<"Enter the position to delete Element : ";
            cin>>pos;
            delete_element_with_pos(&head,pos);
            break;
            case 7:
            delete_linked_list(&head);
            break;
            case 8:
            display_list(&head);
            break;
            default:
            cout<<"Thank You............!";
            
            
        }
        
    }while(num<9);
}