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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return head;
        else if (head->next == nullptr)
            return head;
        else {
            ListNode* one = head;
            ListNode* two = new ListNode();
            ListNode* fi = two;
            int flag = 0;
            while (one != nullptr) {
                if (one->next != nullptr) {
                    if (one->val == one->next->val) {
                        one = one->next;
                        flag = 1;
                    } else {
                        if (flag == 1) {
                            one = one->next;
                            flag = 0;
                            continue;
                        }
                        two->next = one;
                        two = two->next;
                        one = one->next;
                    }
                } else {
                    if (flag == 1) {
                            one = one->next;
                            two->next=one;
                            flag = 0;
                            continue;
                            }
                    two->next = one;
                    two = two->next;
                    one = one->next;
                }
            }
            fi=fi->next;
            return (fi);
        }
    }
};
