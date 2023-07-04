//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
         int count=0;
        bool flag=true;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            if(count==1 && flag==true){
                flag=false;
                continue;
            }
            if(count==0 && flag==false){
                flag=true;
                continue;
            }
            
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
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends