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
    ListNode* doubleIt(ListNode* head) 
    {
        ListNode* back=nullptr;
        ListNode* mid=head;
        ListNode* front=head->next;
        while(mid!=nullptr)
        {
            mid->next=back;
            back=mid;
            mid=front;
            if(front!=nullptr)
            front=front->next;
        }
        
        mid=back;
        back=nullptr;
        front=mid->next;
        int carry=0;
        while(mid!=nullptr)
        {
            if(mid->val*2+carry>=10)
            {
                mid->val=(mid->val*2)-10+carry;
                carry=1;
            }else
            {
                mid->val=(mid->val*2)+carry;
                carry=0;
            }
            mid->next=back;
            back=mid;
            mid=front;
            if(front!=nullptr)
            front=front->next;
        }
        if(carry==1)
        {
            ListNode* c=new ListNode(1,back);
            back=c;

        }
        return back;
    }
};
