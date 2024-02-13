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
    void reverse(ListNode* &head,ListNode* q,ListNode* p){
        if(p==NULL)
        head=q;
        else{
        reverse(head,p,p->next);
        p->next=q;
        }
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *q=NULL,*p=head;
        reverse(head,q,p);
        return head;      
    }
};