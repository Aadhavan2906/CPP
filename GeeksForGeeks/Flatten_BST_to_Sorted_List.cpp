class Solution
{
public:
    void inorder(Node* cur,Node* &prev)
    {
        if(cur==NULL)return;
        inorder(cur->left ,prev);
        prev->left = NULL;
        prev->right = cur;
        prev = cur;
        inorder(cur->right,prev);
        return;
    }
    Node *flattenBST(Node *root)
    {
        Node* dum = new Node(-1);
        Node*prev = dum;
        inorder(root , prev);
        prev->left = NULL;
        prev->right = NULL;
        return dum->right;
    }
};