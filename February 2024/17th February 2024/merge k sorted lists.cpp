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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        ListNode *head=NULL,*tail=NULL;
        for(int i=0;i<lists.size();i++){
            while(lists[i]){
                v.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(v.begin(),v.end());
        for(auto i:v){
            ListNode *temp=new ListNode(i,NULL);
            if(!head){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
        }
        return head;
    }
};