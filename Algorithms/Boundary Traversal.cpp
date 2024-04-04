#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left , *right;
    Node(int data){this->data = data;left = right = NULL;}
};

class BoundryTraversal
{
    private:
    void leftBoundary(Node* root)
    {
        if(root->left==NULL && root->right==NULL)return;
        dp.push_back(root->data);
        if(root->left!=NULL)
        leftBoundary(root->left);
        else
        leftBoundary(root->right);
            
    }
    void inorderLeaf(Node* root)
    {
        if(root->left==NULL && root->right==NULL){
            
            dp.push_back(root->data);
            return;
        }
        if(root->left && root->right)
        {
            inorderLeaf(root->left);
            inorderLeaf(root->right);
        }else if(root->left)
            inorderLeaf(root->left);
        else 
            inorderLeaf(root->right);
    }
    void rightBoundaryReverse(Node* root)
    {
        if(root->left==NULL && root->right==NULL)return;
        if(root->left and root->right)
        {
        rightBoundaryReverse(root->left);
        rightBoundaryReverse(root->right);
        dp.push_back(root->data);
        }else if(root->right)
        {
            rightBoundaryReverse(root->right);
            dp.push_back(root->data);
        }else if(root->left){
            rightBoundaryReverse(root->left);
            dp.push_back(root->data);
        }
    }
    public:
    vector<int> dp;
    BoundryTraversal(Node* root)
    {
        dp.push_back(root->data);
        leftBoundary(root->left);
        inorderLeaf(root);
        rightBoundaryReverse(root->right);
    }
    
};

void inorder(Node* root)
{
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node* root = new Node(5);
    Node* one  = new Node(10);
    Node* two = new Node(20);
    Node* three = new Node(30);
    Node* four = new Node(40);
    Node* five = new Node(50);
    Node* six = new Node(60);
    Node* seven = new Node(70);
    root->left = one;
    root->right = two;
    one->left = three;
    one->right = four;
    three->left = seven;
    two->left = five;
    five->right = six;
    BoundryTraversal* bt = new BoundryTraversal(root);
    for(auto i : bt->dp)
        cout<<i<<" ";
}
