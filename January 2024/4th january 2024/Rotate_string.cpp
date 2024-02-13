class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        int i=1,n=s.size();
        while(i<=(n-1)){
            string temp=s.substr(i,n-i);
            temp+=s.substr(0,i);
            if(goal==temp)
            return true;
            i++;
        }
        return false;
    }
};