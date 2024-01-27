class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),ans=0;
        vector<int> v(n);
        v[0]=nums[0];
        if(v[0]==k) ans++;
        for(int i=1;i<nums.size();i++){
        v[i]=v[i-1]+nums[i];
        if(v[i]==k) ans++;
        }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<i;j++){
                if(v[i]-v[j]==k) ans++;
            }
        }
        return ans;
    }
};