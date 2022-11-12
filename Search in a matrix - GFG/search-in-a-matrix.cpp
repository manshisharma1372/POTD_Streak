//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    
	    /* // o(n*m)
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            if(mat[i][j]==X){
	                return 1;
	            }
	        }
	    }
	    return 0;
	    
	    */
	    
	    /*
	    
	    
	    if(!mat.size()){
	       return false;
	   }
	 
	    long int low=0;
	    long int high=(N*M)-1;
	    
	    while(low<=high){
	        long int mid=(low+(high-low)/2);
	        
	        if(mat[mid/M][mid%M]==X){
	            return true;
	        }
	       else if(mat[mid/M][mid%M]<X){
	         
	            low=mid+1;
	        }
	        else{
	              high=mid-1;
	        }
	       
	    }
	    return false;
	    
	    */
	    
	    
	    int i=0,j=M-1;
	    while(i<N && j>=0){
	        if(mat[i][j]==X){
	            return 1;
	        }
	        if(mat[i][j]>X){
	            j--;
	        }
	        else i++;
	    }
	    return 0;
	    
	}
	
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends