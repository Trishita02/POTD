class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i=0,ans=0;
        while(i<nums1.size()){
            int l=i,h=nums2.size()-1;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(nums1[i]<=nums2[mid]){
                    ans=max(ans,mid-i);
                    l=mid+1;
                }
                else if(nums1[i]>nums2[mid])
                h=mid-1;
            }
            i++;
        }
        return ans;
    }
};