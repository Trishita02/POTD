#include<bits/stdc++.h>
using namespace std;
string log_chop(vector<int> input){
    int sum=0;
    for(int i=0;i<input.size();i++)
    sum+=(input[i]-1);
    if(sum%2==1)
    return "errorgorn";
    else
    return "maomao90";
}
int main(){
    int t,i=1;
    int n;
    cin>>t;
    vector<int> input;
    vector<string>output;
    while(i<=t){
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            input.push_back(x);
        }
        output.push_back(log_chop(input));
        input.clear();
        i++;
    }
    for(string i:output) cout<<i<<"\n";
    return 0;
}