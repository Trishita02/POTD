class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,ans=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==0){
                k--;
                if(k>=0) ans=max(ans,j-i+1);
                else{
                    while(k<0){
                        if(nums[i]==0) k++;
                        i++;
                    }
                }
            }
            else
            ans=max(ans,j-i+1);
            j++;
        }
        if(ans==INT_MIN) ans=0;
        return ans;
    }
};