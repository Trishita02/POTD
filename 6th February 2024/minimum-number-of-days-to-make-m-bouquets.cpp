class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int i=1,j=*max_element(bloomDay.begin(),bloomDay.end()),ans=-1;
        while(i<=j){
            int mid=i+(j-i)/2,c=0,l=0;
            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid)
                    {
                        c++;
                    }
                else{
                    l+=(c/k);
                    c=0;
                }
            }
            if(c>0) l+=(c/k);
            if(l>=m){
                ans=mid;
                j=mid-1;
            }
            else if(l<m){
                i=mid+1;
            }
        }
        return ans;
    }
};