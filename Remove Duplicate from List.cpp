#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void add(int val , ListNode*&tail )
    {
        ListNode* newNode = new ListNode(val);
        tail->next = newNode;
        tail = tail->next;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        map<int , int> mp;
        ListNode* cur = head;
        ListNode* root = new ListNode(0) ;
        ListNode *tail = root;
        while(cur!= nullptr)
        {
            mp[cur->val]++;
            if(mp[cur->val] == 1)
            {
                add( cur->val , tail);
            }
            cur = cur->next;
        }
        return root->next;
    }
};

int main()
{
    Solution s;
    
}
