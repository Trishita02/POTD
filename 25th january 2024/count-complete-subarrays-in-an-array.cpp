class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        vector<int> distinct,x;
        for(auto i:nums){
            if(find(distinct.begin(),distinct.end(),i)==distinct.end())
            distinct.push_back(i);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(find(x.begin(),x.end(),nums[j])==x.end())
                x.push_back(nums[j]);
                if(x.size()==distinct.size())
                ans++;
            }
            x.clear();
        }
        return ans;
    }
};