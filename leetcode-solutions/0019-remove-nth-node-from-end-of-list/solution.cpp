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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* dummy=head;
        int total=0;
        while(dummy!=nullptr)
        {
            total++;
            dummy=dummy->next;
        }
        if(head==nullptr)
        {
            return head;
        }
        else{
        ListNode* tracker=head;
        int noderemoval=total-n;
        if(noderemoval==0)
        {
            head=head->next;
        }
        for(int i=1;i<=noderemoval;i++)
        {
            if(i==noderemoval)
            {
                tracker->next=tracker->next->next;
            }
            tracker=tracker->next;
        }
        return head;}
    }
};
