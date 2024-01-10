#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sequence(vector<int> input){
  vector<vector<int>> output;
  vector<int> temp;
  int j;
  for(int i:input){
    if(i%2==1) {
        j=0;
    }
    else{
        temp.push_back(1);
        temp.push_back(3);
        j=2;
    }
    for(int k=j;k<i;k++)
    temp.push_back(2);
    output.push_back(temp);
    temp.clear();
  }
  return output;  
}
int main(){
    int i=1,t,n;
    vector<int> input;
    vector<vector<int>> output;
    cin>>t;
    while(i<=t){
        cin>>n;
        input.emplace_back(n);
        i++;
    }
    output=sequence(input);
    for(int i=0;i<output.size();i++){
        for(int j=0;j<output[i].size();j++){
            cout<<output[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}