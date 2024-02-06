/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=0,h=n,r;
        while(l<=h){
            int pick=l+(h-l)/2;
            r=guess(pick);
            if(r==0)
                return pick;
            else if(r<0)
                h=pick-1;
            else
                l=pick+1;
        } 
        return 0;
    }
};