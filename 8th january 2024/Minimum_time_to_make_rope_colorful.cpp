class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int time=0,prev=0,current,n=colors.size();
        for(int i=0;i<n;i++){
            if(i!=0 && colors[i]!=colors[i-1])
            prev=0;
            current=neededTime[i];
            time+=min(prev,current);
            prev=max(prev,current);
        }
        return time;
    }
};