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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr  )
        return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* reset=head->next;
        while(odd->next!=nullptr || even->next!=nullptr)
        {
            if(odd->next!=nullptr && odd->next->next!=nullptr)
            {odd->next=odd->next->next;
            odd=odd->next;}
            else
            odd->next=nullptr;
            if(even->next!=nullptr && even->next->next!=nullptr)
            {even->next=even->next->next;
            even=even->next;}
            else
            even->next=nullptr;
        }
        odd->next=reset;
        return head;
    }
};
