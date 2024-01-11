#include<bits/stdc++.h>
using namespace std;
vector<int> cypher(vector<int> sequence,vector<pair<int,string>> pattern){
int n=pattern.size(),no;
vector<int> temp;
for(int i=0;i<n;i++){
no=sequence[i];
for(int j=0;j<pattern[i].first;j++){
    if(pattern[i].second[j]=='U')
    {
        no-=1;
        if(no==-1) no=9;
    }
    else{
        no+=1;
        if(no==10) no=0;
    }
}
temp.push_back(no);
}
return temp;
}
int main(){
    int t,i=1,n,x;
    string str;
    vector<vector<int>> output;
    vector<pair<int,string>> pattern;
    vector<int> sequence;
    cin>>t;
    while(i<=t){
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            sequence.push_back(x);
        }
        for(int j=0;j<n;j++)
        {
            cin>>x;
            cin>>str;
            pattern.push_back({x,str});
        }
       output.push_back(cypher(sequence,pattern));
        sequence.clear();
        pattern.clear();
        i++;
    }
    for(i=0;i<output.size();i++){
        for(int j=0;j<output[i].size();j++){
            cout<<output[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}