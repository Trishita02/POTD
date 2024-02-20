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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next) return head;
        ListNode *temp=head;
        vector<int> v;
        int i=1,j=0;
        while(i<=right && temp){
            if(i>=left && i<=right)
            v.push_back(temp->val);
            temp=temp->next;
            i++;
        }
        reverse(v.begin(),v.end());
        temp=head; i=1;
        while(temp){
            if(i>=left && i<=right){
                temp->val=v[j];
                j++;
            }
            i++;
            temp=temp->next;
        }
        return head;
    }
};