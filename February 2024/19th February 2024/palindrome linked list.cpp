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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode *temp=head;
        while(temp){
            s.push(temp->val);
            temp=temp->next;
        }
        while(head){
            if(head->val!=s.top()) return 0;
            s.pop();
            head=head->next;
        }
        return 1;
    }
};