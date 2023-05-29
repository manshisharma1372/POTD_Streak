//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

   
    int evenlyDivides(int N){
        int temp=N;
       
        int ans=0;
        while(temp!=0){
          int last_digit=temp%10;
           
           if(last_digit!=0 && (N%last_digit)==0){
               ans++;
           }
           temp=temp/10;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends