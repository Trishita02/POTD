#include<bits/stdc++.h>
using namespace std;
vector<int> sequence(int n){
    vector<int> ans;
    int a=n-3;
    ans.push_back(a);
    for(int i=0;i<3;i++)
    ans.push_back(1);
    return ans;
}
int main(){
    int t,i=1;
    int n;
    cin>>t;
    vector<vector<int>> output;
    while(i<=t){
        cin>>n;
        output.push_back(sequence(n));
        i++;
    }
    for(int i=0;i<output.size();i++){
        for(int j=0;j<output[i].size();j++)
        cout<<output[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}