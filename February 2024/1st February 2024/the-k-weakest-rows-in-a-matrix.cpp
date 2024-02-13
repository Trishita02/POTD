    class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int,int> mp;
        vector<int> ans;
        int x=0;
        for(int i=0;i<mat.size();i++){
            int l=0,h=mat[i].size()-1; x=0;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(mat[i][mid]==1){
                    x=mid+1;
                    l=mid+1;
                }
                else if(mat[i][mid]<1)
                h=mid-1;
                else l=mid+1;
            }
            mp.insert({x,i});
        }
        for(auto itr=mp.begin();itr!=mp.end() && k;itr++)
        {
            ans.push_back(itr->second);
            k--;
        }
        return ans;
    }
};