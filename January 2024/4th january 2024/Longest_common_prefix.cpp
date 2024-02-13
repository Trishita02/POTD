class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string s=strs[0];
       int ans_length=s.size();
       for(int i=1;i<strs.size();i++)
       {
           int j=0;
           while(j<s.size() && j<strs[i].size() && s[j]==strs[i][j])
           j++;
           ans_length=min(ans_length,j);
       } 
       return s.substr(0,ans_length);
    }
};