class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int m,ans=0;
        for(int i=0;i<houses.size();i++){
            if(find(heaters.begin(),heaters.end(),houses[i])!=heaters.end())
            continue;
            m=INT_MAX;
            for(int j=0;j<heaters.size();j++){
                m=min(m,abs(houses[i]-heaters[j]));
            }
            ans=max(m,ans);
        }
        return ans;
    }
};