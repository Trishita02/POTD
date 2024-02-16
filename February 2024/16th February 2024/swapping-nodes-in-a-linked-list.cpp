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
    ListNode* swapNodes(ListNode* head, int k) {
        int i=1,n=0;
        ListNode *temp=head,*t1,*t2;
        while(temp){
            n++;
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(i==k)
            t1=temp;
            if(n-i+1==k)
            t2=temp;
            i++;
            temp=temp->next;
        }
        i=t1->val;
        t1->val=t2->val;
        t2->val=i;
        return head;
    }
};