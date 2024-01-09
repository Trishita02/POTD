#include<bits/stdc++.h>
using namespace std;
vector<int> smallest_integer(vector<int> input){
vector<int> output;
int ans,r;
for(int i=0;i<input.size();i++){
    ans=INT_MAX;
    if(input[i]>9 && input[i]<100){
        output.push_back(input[i]%10);
        continue;
    }
    while(input[i]!=0){
        r=input[i]%10;
        ans=min(ans,r);
        input[i]/=10;
    }
    output.push_back(ans);
}
return output;
}
int main(){
    int t,i=1;
    int n;
    vector<int> input,output;
    cin>>t;
    while(i<=t){
        cin>>n;
        input.push_back(n);
        i++;
    }
    output=smallest_integer(input);
    for(int i:output)
    cout<<i<<"\n";
    return 0;
}