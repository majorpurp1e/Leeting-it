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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head->next->next == nullptr)
            return {-1, -1};
        ListNode* back = head;
        ListNode* mid = head->next;
        ListNode* front = mid->next;
        vector<int> indices;
        int i = 1;
        while (front != nullptr) {
            if (mid->val < front->val && mid->val < back->val) {
                indices.push_back(i);
            } else if (mid->val > front->val && mid->val > back->val) {
                indices.push_back(i);
            }
            i++;
            back = mid;
            mid = front;
            front = front->next;
        }
        if (indices.size() < 2)
            return {-1, -1};
        int min = i+1;
        for (int i = 0; i < indices.size() - 1; i++) {
            if (indices[i + 1] - indices[i] < min)
                min = indices[i + 1] - indices[i];
        }
        int max = indices[indices.size() - 1] - indices[0];
        indices.clear();
        indices.push_back(min);
        indices.push_back(max);
        return indices;
    }
};
