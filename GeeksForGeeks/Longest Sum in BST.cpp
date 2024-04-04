#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    
    int tot = 0, h = 0;
    void solver(Node* root , int dep , int sum)
    {
        if(root == NULL )
        {
            if(h==dep)
                tot = max(sum , tot);
            else if(h < dep)
            {
                h = dep;
                tot=0;   
            }
            return ;
        }
        if(dep > h)
            h = dep;
        sum+=root->data;
        solver(root->left , dep+1 , sum);
        solver(root->right , dep+1 , sum);
        return;
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        solver(root , 0 , 0);
        return tot;
    }
};

int main()
{
    Node *q = new Node(10);
    Node *w = new Node(20);
    Node *e = new Node(20);
    Node *f = new Node(40);
    q->right = e;
    q->left = w;
    e->right = f;
    
    Solution s;
    cout<<s.sumOfLongRootToLeafPath(q );
}
