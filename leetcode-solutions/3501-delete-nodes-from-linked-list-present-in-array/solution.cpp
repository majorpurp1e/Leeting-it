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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = 1;
        }
        ListNode* dummy = head;
        ListNode* prev = new ListNode(0,head);
        ListNode* sez = prev;
        while (dummy != nullptr) {
            if (hash.contains(dummy->val)) 
            {
                prev->next = dummy->next;
                dummy = dummy->next;
            } else {
                prev = dummy;
                dummy = dummy->next;
            }
        }
        return sez->next;
    }
};
