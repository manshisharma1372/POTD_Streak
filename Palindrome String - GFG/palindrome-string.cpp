//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	bool check(string &s,int i){
	    
	    //Base case
	    if(i>=s.size()/2){
	        return true;
	    }
	    
	    if(s[i]!=s[s.size()-i-1]){
	        return false;
	    }
	    check(s,i+1);
	}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    if(check(S,0)){
	        return 1;
	    }
	    return 0;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends