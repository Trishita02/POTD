#include<bits/stdc++.h>
using namespace std;
vector<string> palindrome(vector<string> s){
map<char,int> mp;
vector<string> input;
int flag=0;
for(int i=0;i<s.size();i++){
    flag=0;
   for(int j=0;j<s[i].size();j++){
    mp[s[i][j]]++;
   }
   if(mp.size()>2) input.push_back("YES");
   else if(mp.size()==2){
    for(auto k:mp){
        if(k.second==1)
        {
            input.push_back("NO");
            flag=1;
            break;
        }
    }
    if(flag==0) input.push_back("YES");
   }
   else input.push_back("NO");
   mp.clear();
}
return input;
}
int main(){
    int t,i=1;
    string s;
    vector<string> input,output;
    cin>>t;
    while(i<=t){
        cin>>s;
        input.push_back(s);
        i++;
    }
    output=palindrome(input);
    for(string i:output)
    cout<<i<<"\n";
    return 0;
}