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
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode *temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }      
        int i=0,j=v.size()-1;
        while(i<j){
            head->val=v[i];
            if(head->next)
            head=head->next;
            head->val=v[j];
            if(head->next)
            head=head->next;
            i++; j--;
        }
        if(i==j) head->val=v[j];
    }
};