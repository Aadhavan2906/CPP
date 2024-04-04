#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int mini = 1e6;
    void solver(Node* &root)
    {
        if(root==NULL)
            return;
        mini = min(root->data , mini);
        if(root->right!=NULL)
            solver(root->right);
        if(root->left!=NULL)
            solver(root->left);
        return;
        
    }
    int minValue(Node* root) {
        solver(root);
        return mini;
    }
};

int main()
{
    Solution s;
    
}
