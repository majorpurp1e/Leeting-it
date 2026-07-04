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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* right = list1;
        ListNode* left = list1;
        ListNode* prevleft = list1;
        int offset = b - a;
        while (a != 0) {
            prevleft = left;
            if (offset > 0) {
                right = right->next;
                offset--;
            } else {
                right = right->next;
                left = left->next;
                a--;
            }
        }
        prevleft->next = list2;
        while (prevleft->next != nullptr) {
            prevleft = prevleft->next;
        }
        prevleft->next = right->next;
        return list1;
    }
};
