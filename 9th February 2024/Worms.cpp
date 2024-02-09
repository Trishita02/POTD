#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int> v1(n),v2(n),ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1[i]=x;
    }
     v2[0]=v1[0];
    for(int i=1;i<n;i++)
        v2[i]=v2[i-1]+v1[i];
     cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(x<=v2[0]){
            ans.push_back(1);
            continue;
        }
        else if(n!=1 && x<=v2[n-1] && x>v2[n-2]){
            ans.push_back(n);
            continue;
        }
        else{
            int l=1,h=n-2;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(x>v2[mid-1] && x<=v2[mid]) {ans.push_back(mid+1); break;}
                else if(x>v2[mid]) l=mid+1;
                else h=mid-1;
            }
        }
    }
    for(auto i:ans) cout<<i<<endl;
    return 0;
}