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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
        {
            return nullptr;
        }
        if (lists.size() == 1 )
            return lists[0];
        else {
            for (int i = 0; i < lists.size()-1; i++) 
            {
                ListNode* li=mergeTwoLists(lists[i],lists[i+1]);
                lists[i+1]=li;
            }
            return lists[lists.size()-1];
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* move = head;
        ListNode* one = list1;
        ListNode* two = list2;
        if (one == nullptr) {
            return two;
        } else if (two == nullptr) {
            return one;
        }
        while (one != nullptr || two != nullptr) {
            if (one == nullptr) {
                head->next = two;
                two = two->next;
                head = head->next;
                break;
            } else if (two == nullptr) {
                head->next = one;
                one = one->next;
                head = head->next;
                break;
            } else if ((one->val < two->val)) {
                head->next = one;
                one = one->next;
                head = head->next;
            } else if ((one->val > two->val)) {
                head->next = two;
                two = two->next;
                head = head->next;
            } else if (one->val == two->val) {
                head->next = one;
                one = one->next;
                head = head->next;
                head->next = two;
                two = two->next;
                head = head->next;
            }
        }
        move = move->next;
        return move;
    }
};
