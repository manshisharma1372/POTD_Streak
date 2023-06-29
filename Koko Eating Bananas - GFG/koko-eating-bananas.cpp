//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int findTime(vector<int> &arr,int hourly){

    int totalHours=0;
    for(int i=0;i<arr.size();i++){
        totalHours+=ceil((double)arr[i]/(double)hourly);
    }
    return totalHours;
}
    int Solve(int n, vector<int>& v, int h) {
        // Code here
           int start=1;
   int maxi= *max_element(v.begin(),v.end());
   int end= maxi;
   int ans=INT_MAX;
   while(start<=end){
       int mid=start+(end-start)/2;
        if(findTime(v,mid)<=h){
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
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends