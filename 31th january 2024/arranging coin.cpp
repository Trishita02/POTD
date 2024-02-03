class Solution {
public:
    int arrangeCoins(int n) {
        long long s=1,e=n;
        while(s<=e){
            long long mid=s+(e-s)/2;
            long long ans=(mid*(mid+1))/2;
            if(ans==n) return mid;
            else if(ans<n){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return e;
    }
};