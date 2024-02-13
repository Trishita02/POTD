#include<iostream>
using namespace std;
int main(){
    string input,output;
    cin>>input;
    for(int i=0;i<input.size();i++){
        if(!(input[i]=='A'||input[i]=='E'||input[i]=='I'||input[i]=='O'||input[i]=='U'||input[i]=='Y'||input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'||input[i]=='y')){
            if(input[i]>=65 && input[i]<=90)
                input[i]+=32;
             output=output+"."+input[i];
        }
    }
    cout<<output;
    return 0;
}