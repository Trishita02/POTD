class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(),l=0,h=n-1;
        if(n==1) return 0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid==0){
            if(nums[mid]>nums[mid+1]) return mid;
            else{
                l=mid+1; continue;
            }
            }
            if(mid==n-1){
            if(nums[mid]>nums[mid-1]) return mid;
            else{
                h=mid-1; continue;
            }
            }
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
            else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]) l=mid+1;
            else h=mid-1;
        }
        return h;
    }
};