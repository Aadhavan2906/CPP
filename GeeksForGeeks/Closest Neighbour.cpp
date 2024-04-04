#include <iostream>


class Solution {
  public:
    int find = -1;
    void solver(Node* root, int n)
    {
        if(root==NULL)return;
        if(root->key<=n)
        {
            find = max(find , root->key);
        }
        solver(root->right , n);
        solver(root->left , n);
        return;
    }
    int findMaxForN(Node* root, int n) {
        solver(root , n);
        
        return find;
    }
};



main()
{
    std::cout<<"Hello World";

    return 0;
}
