#include<bits/stdc++.h>
using namespace std;
vector<int> notsorted(vector<vector<int>> input){
vector<int> output;
int count,s;
for(int i=0;i<input.size();i++){
   count=0;
   s=input[i].size();
   while(input[i][s-2]<=input[i][s-1]){
    input[i][s-2]++; input[i][s-1]--;
    count++;
   }
   output.emplace_back(count);
}
return output;
}
int main(){
    int t,i=1;
    int n;
    vector<int> temp,output;
    vector<vector<int>> input;
    cin>>t;
    while(i<=t){
        cin>>n;
        for(int j=0;j<n;j++){
        int x;
        cin>>x;
        temp.push_back(x);
        }
        input.push_back(temp);
        i++;
    }
    output=notsorted(input);
    for(int i:output)
    cout<<i<<"\n";
    return 0;
}