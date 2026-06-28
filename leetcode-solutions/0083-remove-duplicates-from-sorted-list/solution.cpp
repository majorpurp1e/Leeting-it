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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==nullptr)
        return nullptr;
        else if(head->next==nullptr)
        return head;
        else{
        ListNode* one=head->next;
        ListNode* two=head;
        int flag=0;
        while(two!=nullptr)
        {
            if(one==nullptr)
            {
                two->next=one;
                two=two->next;
            }else if(two->val==one->val)
            {
                one=one->next;
            }else 
            {
                if(flag==0)
                {head=two;
                flag=1;}
                two->next=one;
                two=two->next;
                one=one->next;
            }
        }return head;
        
    }}
};
