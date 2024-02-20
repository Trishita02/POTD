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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode *temp=head,*ans=NULL,*tail;
        while(temp){
            mp[temp->val]++;
            temp=temp->next;
        }
        for(auto i:mp){
            if(i.second==1){
            ListNode *h=new ListNode(i.first,NULL);
            if(!ans){
                ans=h;
                tail=h;
            }
            else{
                tail->next=h;
                tail=h;
            }
            }
        }
        return ans;
    }
};