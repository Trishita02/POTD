class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int i=0,d=n;
        vector<int> ans;
        for(int k=0;k<s.size();k++){
            if(s[k]=='I'){
            ans.push_back(i);
            i++;
            }
            else{
                ans.push_back(d);
                d--;
            }
        }
        if(s[n-1]=='I')  ans.push_back(i);
        else ans.push_back(d);
        return ans;
    }
};