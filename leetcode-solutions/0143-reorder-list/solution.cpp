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
    void reorderList(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr  )
        {
            head=head;
        }else{
        ListNode* dum1=head;
        ListNode* dum=head;
        ListNode* check=nullptr;
        while(dum!=check)
        {
            dum=dum->next;
            if(dum->next==check)
            {
                ListNode* temp=head;
                head=head->next;
                temp->next=dum;
                dum->next=head;
                check=dum;
                dum=head;
            }
            
        }head->next=nullptr;
        head=dum1;
    }}
};
