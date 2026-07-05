/**
 *Definition for singly-linked list.
 *struct ListNode {
 *  int val;
 *  ListNode * next;
 *  ListNode() : val(0), next(nullptr) {}
 *  ListNode(int x) : val(x), next(nullptr) {}
 *  ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        bool isPalindrome(ListNode *head)
        {
            if (head->next== nullptr || (head->next->next == nullptr && head->val == head->next->val))
                return true;
            else if ((head->next->next == nullptr && head->val != head->next->val))
                return false;
            int size = 0;
            ListNode *dummy = head;
            while (dummy != nullptr)
            {
                size++;
                dummy = dummy->next;
            }
            int curr = 0;
            ListNode *mid = head;
            ListNode *front = head->next;
            ListNode *back = head;
            while (curr != -1)
            {
                curr++;
                if (curr == ceil(size/2))
                {
                    back = nullptr;
                    mid = mid->next;
                    if (mid!= nullptr)
                        front = mid->next;
                    while (mid != nullptr)
                    {
                        mid->next = back;
                        back = mid;
                        mid = front;
                        if (mid != nullptr)
                            front = mid->next;
                    }
                    curr = -1;
                }
                if(mid!=nullptr)
                mid = mid->next;
            }
            while (back != nullptr)
            {
                if (head->val != back->val)
                    return false;
                    back=back->next;
                    head=head->next;
            }
            return true;
        }
};
