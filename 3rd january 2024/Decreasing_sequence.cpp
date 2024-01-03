//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int minMoves(int a[], int n, int k);

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n];
    	for(int i=0;i<n;i++)
    	    cin>>a[i];
	   
    	cout<<minMoves(a,n,k)<<"\n";
	}
	return 0;
}

// } Driver Code Ends


int minMoves(int a[], int n, int k)
{
    int moves=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            int diff=ceil((double)(a[i]-a[i-1])/k);
            a[i]=a[i]-(diff*k);
            moves=(moves+diff)%MOD;
        }
    }
    return moves;
}