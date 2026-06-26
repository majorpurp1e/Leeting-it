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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }else
        {
            ListNode* one=head->next;
            ListNode* two=head;
            ListNode* three=nullptr;
            /*if(head->next->next!=nullptr)
            {three=head;
            two=head->next;
            one=head->next->next;}*/
            int swap=0;
            int first=0;
            while(one!=nullptr)
            {
                {
                    if(three!=nullptr)
                    three->next=one;
                three=one->next;
                one->next=two;
                two->next=three;
                if(first==0)
                {
                    head=one;
                    first++;
                }
                ListNode* dummy=two;
                two=three;
                if(two==nullptr)
                {
                    break;
                }
                else
                one=two->next;
                three=dummy;
                
            }}
            return head;


        }
        
    }
};
