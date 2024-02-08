class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=*max_element(nums.begin(),nums.end()),sum=0,ans=0;
        while(l<=h){
            sum=0;
            int mid=l+(h-l)/2;
            for(int i=0;i<nums.size();i++){
                sum+=(ceil(nums[i]/(float)mid));
            }
            if(sum<=threshold){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};