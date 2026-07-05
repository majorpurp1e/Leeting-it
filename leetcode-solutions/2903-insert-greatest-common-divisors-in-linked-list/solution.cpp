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
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        ListNode* prev;
        ListNode* dummy= head;
        while(dummy->next!=nullptr)
        {
            int div=gcd(dummy->val,dummy->next->val);
            prev=dummy;
            dummy=dummy->next;
            ListNode* mid=new ListNode(div,dummy);
            prev->next=mid;
        }
        return head;
        
    }
};
