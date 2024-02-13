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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0,i=1;
        while(temp){
            c++;
            temp=temp->next;
        }
        if(n==c) {
            head=head->next;
            return head;
        }
        temp=head;
        while(temp){
            if(i==c-n)
            break;
            temp=temp->next;
            i++;
        }
            temp->next=temp->next->next;
            return head;
    }
};