#include<iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

Node* newNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right =NULL;
    return newNode;
}

Node* Insert(Node* root,int data)
{
    if(root==NULL)
    {
        root = newNode(data);
        return root;
    }
    else if(data <= root->data)
    {
       root->left =  Insert(root->left,data);
    }
    else if(data >=root->data)
    {
        root->right = Insert(root->right,data);
    }
    return root;
}

bool search(Node *root,int data)
{
    if(root == NULL)
    {
        return false;
    }
    else if(root->data == data)
    {
        return true;
    }
    else if(data <= root->data)
    {
        return search(root->left,data);
    }
    else
    {
        return search(root->right,data);
    }
}
void display(Node **root)
{
    cout<<(*root)->data;
}
int main()
{
   Node *root;
   root = NULL;
root = Insert(root,10);
root = Insert(root,100);
root = Insert(root,20);
 
bool found = search(root,200);
 if(found)
 {
     cout<<"Found";
 }
 else
 {
     cout<<"Not Found";
 }
    
}