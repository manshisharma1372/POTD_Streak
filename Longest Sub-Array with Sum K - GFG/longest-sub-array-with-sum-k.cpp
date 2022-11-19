//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        unordered_map<int,int> m;
        int maxlen=0,sum=0;
        m[0]=-1;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(m.find(sum-k) != m.end()){
                maxlen=max(maxlen,i-m[sum-k]);
            }
            if(m.find(sum)==m.end()){
                m[sum]=i;
            }
        }
        return maxlen;
        
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends