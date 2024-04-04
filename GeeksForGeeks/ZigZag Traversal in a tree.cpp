#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector <int> zigZagTraversal(Node* root)
    {
    	queue<Node*> q;
    	q.push(root ); bool ltr = true;
    	vector<int> ans;
    	while(!q.empty())
    	{
    	    int size = q.size();
    	    vector<int> temp(size);
    	    for(int i=0;i<size;i++)
    	    {
    	        Node* val = q.front();
    	        q.pop();
    	        
    	        int index = (ltr) ? i : size-1-i;
    	        temp[index] = val->data;
    	        
    	        if(val->left)
    	        q.push(val->left);
    	    
    	        if(val->right)
    	        q.push(val->right);
    	    }
    	    ltr = !ltr;
    	    for(auto i : temp)
    	        ans.push_back(i);
    	}
    	return ans;
    }
};

int main()
{
    
}
