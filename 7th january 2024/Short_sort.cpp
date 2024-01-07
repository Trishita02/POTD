#include<bits/stdc++.h>
using namespace std;
vector<string> checkabc(vector<string> s){
vector<string> output;
for(int i=0;i<s.size();i++){
    if(s[i]=="bca" || s[i]=="cab")
    output.push_back("NO");
    else
    output.push_back("YES");
}
return output;
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
    output=checkabc(input);
    for(string i:output)
    cout<<i<<"\n";
    return 0;
}