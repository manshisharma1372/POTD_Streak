//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      int findgcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return findgcd(b, a % b);
}

    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
    
vector<long long> v;
long long gcd=findgcd(A,B);
long long lcm= A*B/gcd;
v.push_back(lcm);
v.push_back(gcd);
return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends