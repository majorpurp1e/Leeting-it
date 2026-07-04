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
    ListNode* middleNode(ListNode* head) 
    {
        double size=0.0;
        ListNode* dummy=head;
        while(dummy!=nullptr)
        {
            size++;
            dummy=dummy->next;
        }
        dummy=head;
        int check=floor(size/2);
        int i=0;
        while(i<check)
        {
            dummy=dummy->next;
            i++;
            if(i==check)
            {
                return dummy;
            }
        }
        return head;
        
    }
};
