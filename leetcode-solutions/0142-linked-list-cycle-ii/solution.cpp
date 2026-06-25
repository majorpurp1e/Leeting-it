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
    ListNode *detectCycle(ListNode *head) 
    {
        unordered_map<ListNode* ,int> hash;
        int i=0;
        ListNode* point= head;
        while(point!=nullptr)
        {
            if(hash.contains(point)==1)
            {
                return point;
            }
            else
            {
                hash[point]++;
                point=point->next;
            }

        }
        return nullptr;
        
    }
        
};
