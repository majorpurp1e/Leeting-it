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
    ListNode* reverseList(ListNode* head) 
    {
        if(head==nullptr)
        {
            return head;
        }
        ListNode* three=nullptr;
        ListNode* two=head;
        ListNode* one=two->next;
        while(two!=nullptr)
        {
            two->next=three;
            three=two;
            two=one;
            if(one!=nullptr)
            one=two->next;
        }
        return three;
        
    }
};
