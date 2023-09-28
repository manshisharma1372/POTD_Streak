//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        unordered_map<int,int> m;
	int sum=0;
	int maxi=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		
		if(sum==0){
			maxi=i+1;
		}

		else if(m.find(sum)!=m.end()){
			
			//sum exist krta map mai
			maxi=max(maxi,i-m[sum]);
		}
		
		else{
			//sum exist nhi krta map mai
			//put it with index in map
			
			m[sum]=i;
		}
	}
	return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends