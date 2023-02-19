//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
        
        int maxapples=0;
        int oranges=0;
        int start=0;
        int end=0;
        while(end<n)
        {
            if(arr[end]=='O')
                oranges++;
            while(oranges>m)
            {
                if(arr[start]=='O')
                    oranges--;
                start++;
            }
            maxapples=max(maxapples,end-start+1);
            end++;
        }
        return maxapples;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends