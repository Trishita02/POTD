#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,sum,x;
    cin>>t;
    vector<string> ans;
    while(t){
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        long long s=sqrt(sum);
        if(s*s==sum)
        ans.push_back("YES");
        else ans.push_back("NO");
        t--;
    }
    for(auto i:ans) cout<<i<<"\n";
    return 0;
}