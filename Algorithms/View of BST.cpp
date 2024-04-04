#include <bits/stdc++.h>
using namespace std;

vector<int> ds;

class BST
{
    public :
    int data;
    BST* left;
    BST* right;
    BST(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void RightView(BST* &root , int level)
{
    if(root==NULL)return;
    if(ds.size()==level)
        ds.push_back(root->data);
    RightView(root->right , level+1);
    RightView(root->left , level+1);
}


int main()
{
    BST* root = new BST(5);
    BST* one = new BST(10);
    BST* two = new BST(20);
    BST* three = new BST(30);
    BST* four = new BST(40);
    BST* five = new BST(50);
    BST* six = new BST(60);
    
    root->left = one;
    root->right = two;
    one->right = four;
    one->left = three;
    four->left = five;
    two->left = six;
    RightView(root , 0);
    for(auto i : ds)
        cout<<i<<" ";
    
}
