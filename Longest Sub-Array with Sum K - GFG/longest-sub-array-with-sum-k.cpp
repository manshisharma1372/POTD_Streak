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
        int maxlen=0,psum=0;
        m[0]=-1;
        
        for(int i=0;i<n;i++){
            psum+=arr[i];
            if(m.find(psum-k) != m.end()){
                maxlen=max(maxlen,i-m[psum-k]);
            }
            if(m.find(psum)==m.end()){
                m[psum]=i;
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