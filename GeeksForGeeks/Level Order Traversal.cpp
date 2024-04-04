#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


class Solution
{
    public:
    vector<int> levelOrder(Node* root)
    {
        vector<int> ans; 
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node* ele = q.front();
            q.pop();
            if(ele->left!=NULL)
                q.push(ele->left);
            if(ele->right!=NULL)
                q.push(ele->right);
            ans.push_back(ele->data);
        }
        return ans;
    }
};


int main()
{
    Solution s;
    Node *root = new Node(10);
    Node *l = new Node(20);
    Node *r = new Node(30);
    Node *ll = new Node(40);
    Node *lr = new Node(60);
    root->left = l;
    l->left = ll;
    l->right = lr;
    root->right = r;
    vector<int> ans = s.levelOrder(root);
    for(auto i : ans)
        cout<<i<<" ";
}
