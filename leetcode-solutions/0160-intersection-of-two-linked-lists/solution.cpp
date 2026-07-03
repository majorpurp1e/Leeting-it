/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int skipB=0;
        int skipA=0;
        ListNode* B=headB;
        ListNode* A=nullptr;
        ListNode* horse=headA;
        unordered_map<ListNode*,int> hash;
        int z=0;
        while(horse!=nullptr)
        {
            hash[horse]=z++;
            horse=horse->next;
        }
        int i=0;
        while(B!=nullptr)
        {
            if(hash.contains(B))
            {
                skipA=hash[B];
                i=1;
                return B;
            }
            B=B->next;
            skipB++;
        }
        return A;
    }
};
