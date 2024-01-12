#include<bits/stdc++.h>
using namespace std;
long long beautiful_array(vector<long long> input){
    sort(input.begin(),input.end());
    long long a=input[0]*input[1],b=input[input.size()-1]*input[input.size()-2];
    long long ans=max(a,b);
    return ans;
}
int main(){
    int t,i=1;
    long long n;
    cin>>t;
    vector<long long> input,output;
    while(i<=t){
        cin>>n;
        for(long long j=0;j<n;j++)
        {
            long long x;
            cin>>x;
            input.push_back(x);
        }
        output.push_back(beautiful_array(input));
        input.clear();
        i++;
    }
    for(long long i:output) cout<<i<<"\n";
    return 0;
}