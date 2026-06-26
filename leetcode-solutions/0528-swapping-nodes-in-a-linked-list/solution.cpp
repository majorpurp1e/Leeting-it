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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode* right=nullptr;
        ListNode* left=nullptr;
        int total=1;
        ListNode* dummy=head;
        while(dummy!=nullptr)
        {
            if(total==k)
            {
                left=dummy;
            }
            if(dummy->next==nullptr)
            {
                right=dummy;
            }
            dummy=dummy->next;
            total++;
        }
        dummy=head;
        int check=total-1;
        while(check>0)
        {
            if(check>k)
            {
            dummy=dummy->next;
            check--;
            }
            if(check==k)
            {
                right=dummy;
                break;
            }
        }
        int store=left->val;
        left->val=right->val;
        right->val=store;
        return head;
    }
};
