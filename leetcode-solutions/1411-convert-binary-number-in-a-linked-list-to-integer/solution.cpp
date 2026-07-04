/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int getDecimalValue(ListNode *head)
        {
            ListNode *dummy = head;
            int size = -1;
            while (dummy != nullptr)
            {
                size++;
                dummy = dummy->next;
            }
            dummy = head;
            int ans = 0;
            while (dummy != nullptr)
            {
                ans = ans + (pow(2, size) *dummy->val);
                 size--;
                dummy = dummy->next;
            }
            return ans;
        }
};
