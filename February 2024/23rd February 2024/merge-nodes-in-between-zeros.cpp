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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ans=NULL,*tail=new ListNode;
        int sum=0;
        while(head){
            if(!head->val && sum){
                ListNode *newnode=new ListNode(sum,NULL);
                if(!ans) {
                    ans=newnode; tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=newnode;
                }
                sum=0;
            }
            sum+=head->val;
            head=head->next;
        }
        return ans;
    }
};