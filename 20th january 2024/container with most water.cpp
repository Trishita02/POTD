class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int x,y,ans=-1;
        while(i<j){
            y=min(height[i],height[j]);
            x=(j-i);
            ans=max(ans,x*y);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return ans;
    }
};