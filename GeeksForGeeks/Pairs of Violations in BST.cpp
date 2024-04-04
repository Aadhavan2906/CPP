#include <iostream>
using namespace std;

class Solution {
  public:
    
    long long merger(vector<long long> &inorder , long long low , long long mid , long long high)
    {
        long long i =low , j = mid+1 , k = 0 , temp[high- low + 1] , inv = 0;
        while(i<=mid && j<=high)
        {
            if(inorder[i] <= inorder[j])
                temp[k++] = inorder[i++];
            else
            {
                inv+=mid-i+1;
                temp[k++] = inorder[j++];
            }
        }
        while(i<=mid)
            temp[k++] = inorder[i++];
        while(j<=high)
            temp[k++] = inorder[j++];
            
        for(long long i=low;i<=high;i++)
            inorder[i] = temp[i-low];
        return inv;
    }
    
    long long mergeSort(vector<long long> &inorder , long long start , long long end)
    {
        if(start>=end)return 0;
        long long inv = 0;
        
            long long mid = (start + end ) / 2;
            inv+= mergeSort(inorder , start , mid);
            inv+= mergeSort(inorder , mid+1 , end);
            inv+= merger(inorder , start , mid , end);
            
        return inv;
    }
    
    long long countInversion(vector<long long> &inorder)
    {
        return mergeSort(inorder , 0 , inorder.size()-1); 
    }
    
    void solver(Node * root , vector<long long> &inorder) 
    {
        if(root==NULL)return;
        solver(root->left , inorder);
        inorder.push_back(root->data);
        solver(root->right , inorder);
    }
    int pairsViolatingBST(int n, Node *root) {
        vector<long long > inorder;
        solver(root , inorder);   
    return countInversion(inorder);
        
    }
    
};


int main()
{
}
