class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,h=nums.size()-1,mid;
        while(l<h){
            mid=l+(h-l)/2;
            if((mid==0 && nums[mid]!=nums[mid+1]) || (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]))
            return nums[mid];
            else if(nums[mid]==nums[mid-1]){
                if(mid%2==0) h=mid-1;
                else l=mid+1;
            }
            else{
                if(mid%2==0) l=mid+1;
                else h=mid-1;
            }
        }
        return nums[l];
    }
};