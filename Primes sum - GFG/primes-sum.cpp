//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        // code here
           vector<int> p;
        p.push_back(1);
        for(int i=2;i<N;i++){
            if(isPrime(i)){
                p.push_back(i);
            }
        }
        
        int low=0,high=p.size()-1;
        while(low<high){
            if(p[low]+p[high]==N){
                return "Yes";
            }
            if(p[low]+p[high]>N){
                high--;
            }
            else{
                low++;
            }
        }
        return "No";
    }
        
    
        bool isPrime(int n){
        if(n == 1){
            return false;
        }
        for(int i=2; i*i <= n; ++i){
            if(n%i == 0){
                return false;
            }
        }
        return true;


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends