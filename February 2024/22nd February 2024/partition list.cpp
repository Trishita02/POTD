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
    ListNode* partition(ListNode* head, int x) {
        ListNode *ans=NULL,*temp=head,*tail;
        while(temp){
            if(temp->val<x){
                ListNode *newnode=new ListNode(temp->val);
                if(!ans) ans=newnode;
                else tail->next=newnode;
                tail=newnode;
            }
            temp=temp->next;
        }
        temp=head;
         while(temp){
            if(temp->val>=x){
                ListNode *newnode=new ListNode(temp->val);
                if(!ans) ans=newnode;
                else tail->next=newnode;
                tail=newnode;
            }
            temp=temp->next;
        }
        return ans;
    }
};