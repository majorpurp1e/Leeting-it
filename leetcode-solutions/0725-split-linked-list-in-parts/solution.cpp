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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> arr;
        int size = 0;
        ListNode* dummy = head;
        while (dummy != nullptr) {
            size++;
            dummy = dummy->next;
        }
        if (size < k) {
            int i = 0;
            ListNode* d1 = head;
            while (k > 0) {
                if (d1 != nullptr) {
                    arr.push_back(d1);
                    d1 = d1->next;
                    arr[i++]->next = nullptr;
                    k--;
                } else {
                    arr.push_back(nullptr);
                    k--;
                }
            }
        } else {
            ListNode* d2 = head;
            int set = size / k;
            int extra = size % k;
            int count = set;
            while (d2 != nullptr) {
                if (count == set) {
                    arr.push_back(d2);
                    if (extra > 0) {
                        extra--;
                        d2 = d2->next;
                    }
                }
                count--;
                ListNode* prev = d2;
                d2 = d2->next;
                if (count == 0) {
                    count = set;
                    prev->next = nullptr;
                }
            }
        }
        return arr;
    }
};
