//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    vector<int> v1;
	    vector<int> v2;
	    vector<int>v3;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]<=x){
	            v1.push_back(arr[i]);
	        }
	    
	    if(arr[i]>=x){
	        v2.push_back(arr[i]);
	    }
	    }
	    
	    v3.push_back(v1.size());
	    v3.push_back(v2.size());
	    return v3;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends