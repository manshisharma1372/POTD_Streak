//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    
    static bool comparator(pair<int,int> mp1, pair<int,int> mp2){
        if(mp1.second==mp2.second){
            return mp1.first<mp2.first;
        }
        else
        return mp1.second>mp2.second;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        
        unordered_map<int,int> mp;
        vector<pair<int,int>> vc;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto i:mp){
            vc.push_back(i);
        }
        
        sort(vc.begin(),vc.end(),comparator);
        
        vector<int> ans;
        
        for(auto i:vc){
            for(int j=0;j<i.second;j++){
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends