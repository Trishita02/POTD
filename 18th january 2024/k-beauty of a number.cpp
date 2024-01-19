class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str=to_string(num);
        int i=0,j=0,n=str.size(),ans=0;
        while(j<n){
            if(j-i+1==k){
                string s=str.substr(i,k);
                int x=stoi(s);
                if(x!=0 && num%x==0)
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};