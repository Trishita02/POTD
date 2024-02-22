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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       ListNode *temp=head;
       int n=0,i,j;
       while(temp){
           n++;
           temp=temp->next;
       }
        vector<ListNode*> ans(k);
       temp=head;
       if(n<=k){
           i=1; j=0;
       }
       else{ 
       i=n/k;
       j=n%k;
       }
       n=0;
       while(temp){
           ListNode *end=new ListNode,*h=NULL;
            int s=(j<=0)?0:1;
            for(int x=0;x<i+s && temp;x++){
                ListNode *t=new ListNode;
                t->val=temp->val;
                if(!h){
                    h=t;
                    end=t;
                }
                else{
                    end->next=t;
                    end=t;
                }
                temp=temp->next;
            }
            ans[n]=h;
            n++;
            j--;
       }
       return ans;

    }
};