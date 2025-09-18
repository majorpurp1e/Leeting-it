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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* point=head;
        ListNode* head1=head;
        ListNode* h=nullptr;
        int z=1;
        int c=0;
        while(point!=nullptr)
        {
            point=point->next;
            z=z+1;
            if(z==k && point!=nullptr)
            {
                c++;
                ListNode* headnext=point->next;;
                ListNode* newhead=reverse(head1,point);
                if(c==1)
                {
                    head=point;
                }
                if(h!=nullptr)
                {
                    h->next=point;
                }
                head1=headnext;;
                point=headnext;
                newhead->next=headnext;
                z=1;
                h=newhead;
            }
        }
        return head;
    }
        ListNode* reverse(ListNode* start, ListNode* end)
        {
            ListNode* point1=start;
            ListNode* prev=nullptr;
            while(prev!=end)
            {
                ListNode* p=point1->next;
                point1->next=prev;
                prev=point1;
                point1=p;
            }
            return start;
        }
    };
