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
    ListNode* rotateRight(ListNode* head, int k) 
    {
         if (head == nullptr || k==0)
            return head;
        ListNode* it = head;
        int size=0;
            while(it!=nullptr)
            {
                size++;
                it=it->next;
            }
            int check=k%size;
        if (head == nullptr || check==0)
            return head;
        else if (head->next == nullptr)
            return head;
        else {
            
            ListNode* one = head;
            ListNode* two = head;
            int gap = 0;
            
            while (two!=nullptr) {
                if (gap < check) {
                    if (one->next == nullptr) {
                        one = head;
                        gap++;
                    } else {
                        one = one->next;
                        gap++;
                    }
                }else if (gap == check && one->next != nullptr ) {
                    one = one->next;
                    two = two->next;
                }
                else if (one->next == nullptr) {
                    ListNode* dummy;
                    if(two->next==nullptr){
                    dummy=head;}
                    else{
                    dummy = two->next;}
                    two->next = nullptr;
                    one->next = head;
                    head = dummy;
                    two=two->next;
                }
            }
            return head;
        }
    }
};
