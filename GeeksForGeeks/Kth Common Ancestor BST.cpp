#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    Node* LCA(Node* root, int x, int y){
        if(!root) return NULL;
        if(root->data==x || root->data==y) return root;
        else if(root->data<x && root->data<y) return LCA(root->right, x,y);
        else if(root->data>x && root->data>y) return LCA(root->left, x, y);
        else{
            return root;
        }
    }
    
    
    void f(Node* root, Node* lca, vector<int>&path){
        path.push_back(root->data);
        if(root->data==lca->data) return;
        else if(root->data > lca->data) f(root->left, lca, path);
        else{
            f(root->right, lca, path);
        }
        
        return;
    }
    
    
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        Node* lca=LCA(root, x, y);
        vector<int>path;
        f(root, lca, path);
        int n=path.size();
        if(path.size()<k) return -1;
        return path[n-k];
    }
};

int main()
{
}
