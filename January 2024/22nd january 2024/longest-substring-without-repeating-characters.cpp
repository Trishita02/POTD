class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),ans=0,i=0,j=0;
        map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                int s=mp.size();
                ans=max(ans,s);
            }
            else if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    mp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};