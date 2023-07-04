//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
         string ans;
        string temp="";
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='.'){
                
                reverse(temp.begin(),temp.end());
                if(temp.size()>0 && ans.size()>0){
                    ans+='.';
                    ans+=temp;

                }
                
                if(temp.size()>0 && ans.size()==0){
                    ans+=temp;
                }
                temp="";
                
            }
            else{
                temp+=s[i];
            }
        
        }
        
                reverse(temp.begin(),temp.end());
                if(temp.size()>0 && ans.size()>0){
                    ans+='.';
                    ans+=temp;

                }
                
                if(temp.size()>0 && ans.size()==0){
                    ans+=temp;
                }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends