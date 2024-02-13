class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i=0,j=0,a=0,ans=INT_MIN,l=k,m=k;
        while(j<answerKey.size()){
            if(answerKey[j]=='F'){
                l--;
                if(l>=0)
                ans=max(ans,j-i+1);
                else{
                    while(l<0){
                        if(answerKey[i]=='F') l++;
                        i++;
                    }

                }
            }
            else
            ans=max(ans,j-i+1);

            if(answerKey[j]=='T'){
                m--;
                if(m>=0)
                ans=max(ans,j-a+1);
                else{
                    while(m<0){
                        if(answerKey[a]=='T') m++;
                        a++;
                    }
                }
            }
            else
            ans=max(ans,j-a+1);
            j++;
        }
        if(ans==INT_MIN) ans=answerKey.size();
        return ans;
    }
};