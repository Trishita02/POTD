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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddhead=NULL,*evenhead=NULL,*tail1,*tail2,*temp=head;
        int i=0;
        while(head){
            ListNode* t=new ListNode(0,NULL);
            if(i%2==0){
                t->val=head->val;
                if(!evenhead){
                evenhead=t;
                tail1=t;
                }
                else{
                    tail1->next=t;
                    tail1=t;
                }
            }
            else{
                 t->val=head->val;
                if(!oddhead){
                oddhead=t;
                tail2=t;
                }
                else{
                    tail2->next=t;
                    tail2=t;
                }
            }
            head=head->next;
            i++;
        }
        if(temp)
        tail1->next=oddhead;
        return evenhead;      
    }
};