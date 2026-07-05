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
    int pairSum(ListNode* head) {
        int size = 0;
        ListNode* dummy = head;
        while (dummy != nullptr) {
            size++;
            dummy = dummy->next;
        }
        dummy = head;
        ListNode* back;
        ListNode* front;
        size = (size / 2)-1;
        int i = 0;
        while (dummy != nullptr) {
            if (i == size) {
                back = dummy->next;
                dummy->next=nullptr;
                dummy=back;
                back=nullptr;
                front = dummy->next;
                while (dummy != nullptr) {
                    dummy->next = back;
                    back = dummy;
                    dummy = front;
                    if (dummy != nullptr)
                        front = dummy->next;
                }
            } else {
                dummy = dummy->next;
                i++;
            }
        }
        dummy = head;
        int compare = 0;
        while (dummy!=nullptr) {
            if (dummy->val + back->val > compare)
                compare = dummy->val + back->val;
            dummy = dummy->next;
            back = back->next;
        }
        return compare;
    }
};
