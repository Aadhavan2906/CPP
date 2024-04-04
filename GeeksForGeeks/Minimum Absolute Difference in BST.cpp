#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    vector<int> left;
    int mini;
    void solver(Node *root)
    {
        if(root==NULL)return;
        solver(root->left);
        mini = max(mini , root->data);
        left.push_back(root->data);
        solver(root->right);
        return;
        
    }
    int absolute_diff(Node *root)
    {
        solver(root);
        for(int i=1;i<left.size();i++)
        {
            mini = min(mini , left[i] - left[i-1]  );
        }
        return mini;
    }
};

int main()
{
    
}
