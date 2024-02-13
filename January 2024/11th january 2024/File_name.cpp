#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,c=0,ans=0;
  string str;
  cin>>n;
  cin>>str;
  for(int i=0;i<n+1;i++){
    if(str[i]=='x')
    c++;
    else{
    if(c>2)
    ans+=c-2;
    c=0;
    }
  }  
  cout<<ans;
  return 0;
}