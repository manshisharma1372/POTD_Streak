//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	    
	      string s = "123456789";

     string s1 = to_string(n);

     string s2 = to_string(n*2);

     string s3 = to_string(n*3);

      string concate = s1+s2+s3;

      sort(concate.begin(),concate.end());

     if(s==concate){

         return true;

     }

     return false;

 
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends