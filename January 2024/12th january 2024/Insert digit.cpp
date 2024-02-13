#include<bits/stdc++.h>
using namespace std;
string insert(int n,int d,string input){
int i;
for(i=0;i<input.size();i++){
    if(d>(input[i]-'0'))
    break;
}   
string s=to_string(d);
input.insert(i,s);
return input;
}
int main(){
    int t,i=1;
    vector<string> output;
    cin>>t;
    while(i<=t){
        int n,digit;
        string input;
        cin>>n;
        cin>>digit;
        cin>>input;
        output.push_back(insert(n,digit,input));
        i++;
    }
    for(string i:output) cout<<i<<"\n";
    return 0;
}