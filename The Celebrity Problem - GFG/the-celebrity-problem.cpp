//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        stack<int> st;
        
        //step 1
        
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        
        //step 2
        while(st.size()!=1){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            
            if(M[a][b]){
                
                st.push(b);
            }
            
            else{
                st.push(a);
            }
        }
        
        //step 3
        int mightbecel=st.top();
        st.pop();
        
        for(int i=0;i<n;i++){
            if(M[mightbecel][i] != 0){
                return -1;
            }
        }
        
        for(int i=0;i<n;i++){
            if(M[i][mightbecel]==0 && i!=mightbecel){
                
                return -1;
            }
        }
        return mightbecel;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends