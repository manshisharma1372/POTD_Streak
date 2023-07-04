//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
            //only last digit matters
        int j=-1;
        for(int i=s.size()-1;i>=0;i--){
            int nums=(int)(s[i]-'0');
            if(nums%2!=0) //it is odd store its index and break
            {
                j=i;
               break;
            }
        }
        if(j==-1){
            return "";
        }
        string ans="";
        for(int i=0;i<=j;i++){
            ans+=s[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends