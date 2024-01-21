class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int i=0,j=0,k=p.size();
       map<char,int> count;
       vector<int> ans;
       for(char i:p) count[i]++;
       int x=count.size();
       while(j<s.size()){
           if(count.find(s[j])!=count.end()){
           count[s[j]]--;
           if(count[s[j]]==0) 
           x--;
           }
           if(j-i+1==k){
               if(x==0)
               ans.push_back(i);
               if(count.find(s[i])!=count.end()){
                count[s[i]]++;
                if(count[s[i]]==1)
                x++;
               }
               i++;
           }
           j++;
       }
       return ans;
    }
};