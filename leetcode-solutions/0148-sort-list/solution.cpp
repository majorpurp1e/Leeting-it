/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* sortList(ListNode *head)
        {
            if (head == nullptr)
            {
                return head;
            }
            else
            {
                vector<int> nums;
                ListNode *ll = head;
                while (ll != nullptr)
                {
                    nums.push_back(ll->val);
                    ll = ll->next;
                }
                sort(nums.begin(), nums.end());
                ll = head;
                int i = 0;
                while (ll != nullptr)
                {
                    ll->val = nums[i++];
                    ll = ll->next;
                }
                return head;
            }
        }
};
