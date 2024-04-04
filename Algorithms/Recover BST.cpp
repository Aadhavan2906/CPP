#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

class RecoverBST
{
    public:
    Node* prev;
    Node* first;
    Node* middle;
    Node* last;
    public:
    void print(Node* root)
    {
        if(root==NULL)return;
        print(root->left);
        cout<<root->data<<" ";
        print(root->right);
    }
    private:
    void inorder(Node* &root)
    {
        if(root==NULL)return;
        inorder(root->left);
        if(prev!=NULL && (prev->data > root->data))
        {
            if(first==NULL)
            {
                first = prev;
                middle = root;
            }
            else
                last = root;
        }
        prev = root;
        inorder(root->right);
    }
    public: 
    void recoverBST(Node* &root)
    {
        if(root==NULL)return;
        first = middle = last = NULL;
        prev = new Node(0);
        inorder(root);
        if(first && last) swap(first , last);
        else if(first && middle) swap(first , middle);
    }
    void swap(Node* &one , Node* &two)
    {
        int temp = one->data;
        one->data = two->data;
        two->data = temp;
        
    }
};

int main()
{
    Node* root = new Node(3);
    Node* one = new Node(1);
    Node* four = new Node(4);
    Node* two = new Node(2);
    root->left = one;
    root->right = four;
    four->left = two;
    RecoverBST r;
    r.print(root);
    r.recoverBST(root);
    cout<<"\n";
    r.print(root);
    return 0;
}
