class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0,j=1,n=nums.size();
        while(i<n && j<n){
            if(nums[i]%2==0){
                i+=2; continue;
            }
            if(nums[j]%2==1) {
                j+=2; continue;
            }
            if(nums[i]%2==1 || nums[j]%2==0){
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};