class Solution {
public:
    bool isHappy(int n) {
        while(n!=1){
            if(n==1 || n==7) return true;
            if(n>=0 && n<=9) return false;
            int t=n,sum=0;
            while(t!=0){
                sum+=pow((t%10),2);
                t/=10;
            }
            n=sum;
        }
        return true;
    }
};