class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0,j=0,sum=0;
        while(i<queries.size()){
            sum=0;
            for(j=0;j<nums.size();j++){
                if(sum+nums[j]>queries[i]) break;
                sum+=nums[j];
            }
            ans.push_back(j);
            i++;
        }
        return ans;
    }
};