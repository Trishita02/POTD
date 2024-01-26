class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long ans=0,i=0,j=skill.size()-1;
        long long compare=skill[i]+skill[j];
        while(i<j){
            if(skill[i]+skill[j]!=compare) return -1;
            ans+=(skill[i]*skill[j]);
            i++;
            j--;
        }
        return ans;
    }
};