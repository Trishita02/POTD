class Solution {
public:
    int findMin(vector<int>& nums) {
      int l=0,h=nums.size()-1;
      int n=nums.size();
    while(l<=h){
        int mid=l+(h-l)/2;
        int prev=(mid-1+n)%n;
        int next=(mid+1)%n;
        if(nums[mid]<=nums[next] && nums[mid]<=nums[prev])
        return nums[mid];
        else if(nums[mid]>nums[h])
        l=mid+1;
        else
        h=mid-1;
    }
    return 0;
    }
};