//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int findDays(int wt[],int n,int cap){
    int days=1;
    int load=0;
    for(int i=0;i<n;i++){
        if(load+wt[i]>cap){
            days++;
            load=wt[i];
        }
        else{
            load+=wt[i];
        }
    }
    return days;
}
    int leastWeightCapacity(int weights[], int N, int d) {
        // code here
          int maxi=*max_element(weights,weights+N);
    int start=maxi;
    int sum=accumulate(weights,weights+N,0);
    int end=sum;
    int ans;
    while(start<=end){

        int mid=start+(end-start)/2;

        if(findDays(weights,N,mid)<=d){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends