class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int r=nums.size(),ans=0,count;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]<=threshold){
            count=1;
            for(int j=i;j<r-1;j++){
                if(nums[j]%2!=nums[j+1]%2 && nums[j+1]<=threshold)
                count++;
                else break;
            }
            ans=max(ans,count);
            }
        }
        return ans;
    }
};