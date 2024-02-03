class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int x=0,ans=0;
        for(int i=0;i<grid.size();i++){
            int l=0,h=grid[i].size()-1; x=0;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(grid[i][mid]<0){
                    x=mid;
                    h=mid-1;
                }
                else l=mid+1;
            }
            if(x>0 || (x==0 && grid[i][0]<0))
            ans+=(grid[i].size()-x);
        }
        return ans;
    }
};