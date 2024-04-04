#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left,*right;
    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
    public:
        int sumOfLeafNodes(Node *root ){
            
            return helper(root);
        }
        int helper(Node* cur)
        {
            if(cur == NULL)return 0;
            if(cur->left == NULL && cur->right == NULL)
                return cur->data;
            return helper(cur->left) + helper(cur->right);
        }
};

int main()
{
    Node* root;
    root = new Node();
    Node* left = new Node();
    Node* right = new Node();
    left->data = 20;
    right->data = 30;
    root->data = 10;
    root->left = left;
    root->right = right;
    Solution s;
    cout<<s.sumOfLeafNodes(root);
    return 0;
}
