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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=NULL,*tail;
        ListNode *temp1=l1,*temp2=l2;
        int carry=0,n;
        while(temp1 || temp2){
            int a,b;
            if(temp1){
                a=temp1->val;
                temp1=temp1->next;
            }
            else a=0;
            if(temp2){
                b=temp2->val;
                temp2=temp2->next;
            }
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
        }
        if(carry){
             ListNode *t=new ListNode(1,NULL);
             tail->next=t;
        }
        return ans;
    }
};