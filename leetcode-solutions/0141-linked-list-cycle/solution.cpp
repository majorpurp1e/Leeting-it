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
    bool hasCycle(ListNode *head) 
    {
        unordered_map<ListNode* ,int> hash;
        ListNode* point= head;
        while(point!=nullptr)
        {
            if(hash.contains(point)==1)
            {
                return true;
            }
            else
            {
                hash[point]++;
                point=point->next;
            }

        }
        return false;
        
    }
};
