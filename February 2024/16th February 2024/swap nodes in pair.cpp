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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* p,*q=head,*r=head->next;
        q->next=r->next;
        r->next=q;
        head=r;
        p=q;
        while(q->next && q->next->next){
            q=q->next;
            r=q->next;
            q->next=r->next;
            r->next=q;
            p->next=r;
            p=q;
        }
        return head;
    }
};