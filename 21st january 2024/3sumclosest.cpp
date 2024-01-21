class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int i,j,n=nums.size(),m=INT_MAX,ans=0;
        sort(nums.begin(),nums.end());
        for(int k=0;k<n;k++){
            i=k+1; j=n-1;
            while(i<j){
                int sum=nums[k]+nums[i]+nums[j];
                if(sum==target)
                {
                   return target;
                    i++; j--;
                }
                else if(sum<target)
                i++;
                else
                j--;
                if(m>abs(target-sum)){
                    ans=sum;
                    m=abs(target-sum);
                }
            }
        }
        return ans;
    }
};