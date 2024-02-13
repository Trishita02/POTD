class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
        int i=0,j=0,ans=INT_MIN,k=2;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            if(mp.size()<=k){
            ans=max(ans,j-i+1);
            }
            else if(mp.size()>k){
                while(mp.size()>k){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0)
                    mp.erase(fruits[i]);
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};