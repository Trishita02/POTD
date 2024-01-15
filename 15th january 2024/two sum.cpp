class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            auto itr=find(nums.begin(),nums.end(),target-nums[i]);
            if((itr-nums.begin())!=i && itr!=nums.end()){
                int a=itr-nums.begin();
                return {i,a};
            }
        }
        return {};
    }
};