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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if(head->next==nullptr || left==right)
        {
            return head;
        }
        ListNode* le=head;
        ListNode dummynode(0, head);
        ListNode* prevleft = &dummynode;
        int l=left;  
        while(l!=1)
        {
            prevleft=le;
            le=le->next;
            l--;
        }
        ListNode* ri=le;
        ListNode* nextright;
        while(right-left!=0)
        {
            ri=ri->next;
            nextright=ri->next;
            right--;
        }
        ListNode* ledum=le;
        ListNode* ridum=ri;
        ListNode* rinextdum=nextright;
        while(rinextdum!=ridum)
        {
            ListNode* dummy=ledum->next;
            ledum->next=rinextdum;
            rinextdum=ledum;
            ledum=dummy;
        }
        prevleft->next=rinextdum;
        return dummynode.next;
        
        
    }};

