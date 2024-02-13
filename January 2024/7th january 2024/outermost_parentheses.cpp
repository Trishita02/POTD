class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        int check=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='(' && (++check)==1)
            continue;
            else if(s[i]==')' && (--check)==0)
            continue;
            else str+=s[i];
        } 
        return str;
    }
};