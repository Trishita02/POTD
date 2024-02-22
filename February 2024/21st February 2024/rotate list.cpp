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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
       int n=0,i=0;
       ListNode *temp=head,*t=head;
       while(temp->next){
           n++;
           temp=temp->next;
       } 
       n++;
       int rotate=k%n; 
        t=head;
        while(t){
            if(n-i==rotate+1){
            break;
            }
            t=t->next;
            i++;
        }
        temp->next=head;
        head=t->next;
        t->next=NULL;
        return head;
    }
};