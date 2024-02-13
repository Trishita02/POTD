#include<bits/stdc++.h>
using namespace std;
int quicksort(int n,int k,vector<int>input){
    int temp=1,count=0,index;
    for(int i=0;i<n;i++)
    if(input[i]==temp)
    index=i;
    for(int i=index;i<n;i++){
        if(input[i]==temp){
            temp++;
            count++;
        }
    }
    return int(ceil((float)(n-count)/(float)k));

}
int main(){
    int t,n,k,x,i=1;
    cin>>t;
    vector<int> temp,output;
    while(i<=t){
        cin>>n>>k;
    for(int p=0;p<n;p++)
    {
        cin>>x;
        temp.push_back(x);
    }
    output.push_back(quicksort(n,k,temp));
    temp.clear();
    i++;
    }
    for(int i:output)
    cout<<i<<"\n";
    return 0;
}