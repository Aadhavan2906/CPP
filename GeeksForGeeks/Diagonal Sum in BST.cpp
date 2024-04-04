#include <stdio.h>
using namespace std;

class Solution {
  public:
    vector<int> diagonalSum(Node* root) {
        queue<Node* > q;
        vector<int> ans;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            int sum = 0;
            for(int i=0;i<size;i++)
            {
                Node* topper = q.front();
                q.pop();
                while(topper!=NULL)
                {
                    if(topper->left)
                        q.push(topper->left);
                    sum+=topper->data;
                    topper = topper->right;
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

int main()
{
    
}
