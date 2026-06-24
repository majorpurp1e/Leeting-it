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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* newList = new ListNode();
        ListNode* star = newList;
        int i=0;
        while(l1 != nullptr || l2 != nullptr)
        {
            if(l1 != nullptr && l2 != nullptr)
            {
            
            if(l1->val + l2->val +i <10)
            {newList->next= new ListNode(l1->val + l2->val + i);
            i=0;}
            else
            {newList->next= new ListNode(l1->val + l2->val + i-10);
            i=1;}
            newList = newList->next;
            l1=l1->next;
            l2=l2->next;
            }
            else if(l1== nullptr)
            {
            if(l2->val +i <10)
            {newList->next= new ListNode(l2->val + i);
            i=0;}
            else
            {newList->next= new ListNode(l2->val + i-10);
            i=1;}
            newList = newList->next;
            l2=l2->next;
            }
            else if(l2== nullptr)
            {
            if(l1->val +i <10)
            {newList->next= new ListNode(l1->val + i);
            i=0;}
            else
            {newList->next= new ListNode(l1->val + i-10);
            i=1;}
            newList = newList->next;
            l1=l1->next;
            }}
            if(i==1)
            {
                newList->next= new ListNode(1);

            }
        return star->next; }
};
