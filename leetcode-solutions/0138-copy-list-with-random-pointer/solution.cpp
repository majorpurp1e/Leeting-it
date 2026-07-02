/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptrptr;
        random = nullptrptr;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        vector<Node*> rand;
        vector<Node*> nono;
        Node* hh=head;
        unordered_map<Node*,Node*> hash;
        int i=1;
        Node* hhh;
        while(hh!=nullptr)
        {
            Node* newnode=new Node(hh->val);
            newnode->next=hh->next;
            newnode->random=hh->random;
            hash[hh]=newnode;
            if( i==1)
            {
                hhh=newnode;
                i=0;
            }
            hh=hh->next;
        }
        Node* dummy=hhh;
        while(dummy!=nullptr)
        {
            dummy->next=hash[dummy->next];
            dummy->random=hash[dummy->random];
            dummy=dummy->next;
        }
        return hhh;
    }
};
