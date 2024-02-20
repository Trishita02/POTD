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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *c1=l1,*c2=l2,*q=NULL;
        reverse(l1,q,c1);
        q=NULL;
        reverse(l2,q,c2);
        q=NULL;
        ListNode *temp1=l1,*temp2=l2,*ans=NULL,*tail;
         int carry=0,n;
        while(temp1 || temp2){
            int a,b;
            if(temp1) a=temp1->val;
            else a=0;
            if(temp2) b=temp2->val;
            else b=0;
            n=(a+b+carry)%10;
            carry=(a+b+carry)/10;
            ListNode *t=new ListNode(n,NULL);
            if(!ans){
                ans=t;
                tail=t;
            }
            else{
                tail->next=t;
                tail=t;
            }
            if(temp1)
            temp1=temp1->next;
            if(temp2)
            temp2=temp2->next;
        }
        if(carry){
             ListNode *t=new ListNode(1,NULL);
             tail->next=t;
        }
        c1=ans;
        reverse(ans,q,c1);
        return ans;
    }
};