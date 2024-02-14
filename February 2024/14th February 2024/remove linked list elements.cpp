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
    ListNode* removeElements(ListNode* head, int val) {
     if(!head || (head->next==NULL && head->val==val)) return NULL;
     ListNode *p=NULL,*q=head;
     while(q){
         if(q->val==val){
             if(p==NULL) head=q->next;
             else p->next=q->next;
         }
         else p=q;
        q=q->next; 
     }
     return head;   
    }
};