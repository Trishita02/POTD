class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0,j=0,k=s1.size();
        map<char,int> mp;
        for(char i:s1) mp[i]++;
        int x=mp.size();
        while(j<s2.size()){
            if(mp.find(s2[j])!=mp.end()){
                mp[s2[j]]--;
                if(mp[s2[j]]==0)
                x--;
            }
            if(j-i+1==k){
                if(x==0) return true;
                if(mp.find(s2[i])!=mp.end()){
                    mp[s2[i]]++;
                    if(mp[s2[i]]==1)
                    x++;
                }
                i++;
            }
            j++;
        }
        return false;
    }
};