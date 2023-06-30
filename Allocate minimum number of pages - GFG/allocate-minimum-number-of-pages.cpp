//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    int isPossible(int arr[],int pages,int n){
    int student=1;
    long long countPages=0;
    for(int i=0;i<n;i++){
        if(countPages+arr[i]<=pages){
            countPages+=arr[i];
        }
        else{
            student++;
            countPages=arr[i];
        }
    }
    return student;
}

    int findPages(int arr[], int n, int m) 
    {
        //code here
    if(m>n) return -1;
    int start=*max_element(arr,arr+n);
    int end=accumulate(arr,arr+n,0);
    int ans;
    while(start<=end){

        int mid=start+(end-start)/2;
        if(isPossible(arr,mid,n)>m){
            start=mid+1;
           
           
        }
       
        else{
            
             ans=mid;
            end=mid-1;
          
        }


    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends