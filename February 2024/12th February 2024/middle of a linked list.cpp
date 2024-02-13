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
    ListNode* middleNode(ListNode* head) {
         int c=0;
         for(ListNode* temp=head;temp;temp=temp->next)
         c++;

         int n=c/2,i=0;
        for(ListNode* ans=head;ans;ans=ans->next){
            if(i==n) return ans;
            i++;
        }
        return head;
    }
};