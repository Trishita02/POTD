class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(),a=-1,b=-1;
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target) {
                a=mid;
                h=mid-1;
            }
            else if(target<nums[mid])
            h=mid-1;
            else
            l=mid+1;
        }
        l=0,h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target) {
                b=mid;
                l=mid+1;
            }
            else if(target<nums[mid])
            h=mid-1;
            else
            l=mid+1;
        }
         return {a,b};
    }
};