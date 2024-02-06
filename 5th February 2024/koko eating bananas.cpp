class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,k=INT_MAX,ans=0;
        while(l<=k){
            int mid=l+(k-l)/2;
            int sum=0;
            for(int i=0;i<piles.size();i++){
                if((piles[i]%mid)!=0)
                sum+=piles[i]/mid + 1;
                else
                sum+=piles[i]/mid;
            }
            if(sum<=h){
                ans=mid;
                k=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};