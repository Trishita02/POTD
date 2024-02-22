/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> s1,s2;
        ListNode *temp1=headA,*temp2=headB,*add;
        while(temp1){
            s1.push(temp1);
            temp1=temp1->next;
        }
        while(temp2){
            s2.push(temp2);
            temp2=temp2->next;
        }
        while(!s1.empty() && !s2.empty()){
            if(s1.top()!=s2.top()) break;
            add=s2.top();
            s1.pop();
            s2.pop();
        }
        while(headB){
            if(headB==add)
            break;
            headB=headB->next;
        }
        return headB;
    }
};