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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head->next==nullptr)
        return nullptr;
        int i=0;
        ListNode* newh=head;
        while(newh!=nullptr)
        {
            i++;
            newh=newh->next;
        }
        i=i/2;
        newh=head;
        ListNode* back=new ListNode(0,head);
        int k=0;
        while(k<=i)
        {
            if(k!=i)
            {
                newh=newh->next;
                back=back->next;
            }else
            {
                back->next=newh->next;
            }
            k++;
        }
        return head;
    }
};
