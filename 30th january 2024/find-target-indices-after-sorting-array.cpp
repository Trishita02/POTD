class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int x) {
        sort(arr.begin(),arr.end());
         int l=0,h=arr.size()-1,first=-1,last=-1;
	    while(l<=h){
	        int mid=l+(h-l)/2;
	        if(arr[mid]==x){
	            first=mid;
	            h=mid-1;
	        }
	        else if(arr[mid]>x)
	            h=mid-1;
	        else
	            l=mid+1;
	    }
	    l=0,h=arr.size()-1;
	     while(l<=h){
	        int mid=l+(h-l)/2;
	        if(arr[mid]==x){
	            last=mid;
	            l=mid+1;
	        }
	        else if(arr[mid]>x)
	            h=mid-1;
	        else
	            l=mid+1;
	    }
        vector<int> ans;
        for(int i=first;i<=last && i!=-1;i++)
        ans.push_back(i);
        return ans;
    }
};