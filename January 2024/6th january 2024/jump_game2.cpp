class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int directjump=n-1,jump=0;
       while(directjump>0){
           int pos;
           for(int j=directjump-1;j>=0;j--){
               if(j+nums[j]>=directjump)
               {
                   pos=j;
               }
           }
           directjump=pos;
           jump++;
       }
       return jump;
    }
};