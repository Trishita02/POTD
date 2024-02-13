class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        int start=0,end=n-1;
        for(int i=0;i<n/2;i++){
            if(s[start]!=s[end]){
                if(s[start]>s[end])
                s[start]=s[end];
                else
                s[end]=s[start];
            }
            start++;
            end--;
        }
        return s;
    }
};