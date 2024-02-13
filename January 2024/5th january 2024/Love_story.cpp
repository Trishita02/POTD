#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> different_indices(vector<string> s){
    int index,j=0;
    vector<int> ans;
    string str="codeforces";
    while(j<s.size()){
        index=0;
        for(int i=0;i<=10;i++){
            if(s[j][i]!=str[i])
                index++;
        }
        ans.push_back(index);
        j++;
    }
    return ans;
}
int main(){
    int t,i=1;
    string s;
    vector<string> input;
    vector<int> ans;
    cin>>t;
    while (i<=t)
    {
        cin>>s;
        input.push_back(s);
        i++;
    }
    ans=different_indices(input);
    for(int i:ans)
    cout<<i<<"\n";
    return 0;
}