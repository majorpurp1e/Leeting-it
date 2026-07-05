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
    ListNode* removeNodes(ListNode* head) {
        stack<int> s1;
        ListNode* mid = head;
        ListNode* front = head->next;
        ListNode* back = nullptr;
        while (mid != nullptr) {
            mid->next = back;
            back = mid;
            mid = front;
            if(mid!=nullptr)
            front = mid->next;
        }
        mid = back;
        front = mid->next;
        int flag = 1;
        while (front != nullptr) {
            if (mid->val > front->val) {
                front = front->next;
            } else if (mid->val <= front->val) {
                if (flag == 1) {
                    back = mid;
                    flag = 0;
                }
                mid->next = front;
                front = front->next;
                mid = mid->next;
            }
        }
        mid->next = nullptr;
        mid = back;
        front = mid->next;
        back = nullptr;
        while (mid != nullptr) {
            mid->next = back;
            back = mid;
            mid = front;
            if(mid!=nullptr)
            front = mid->next;
        }
        return back;
    }
};
