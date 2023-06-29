//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  int sumOfDiv(vector<int> &v,int mid)
{
  int sum=0;
  for(int i=0;i<v.size();i++){
    sum+=ceil((double)v[i]/(double)mid);
  }
  return sum;
}
    int smallestDivisor(vector<int>& arr, int limit) {

        // Write your code here.
         int start=1;
  int maxi=*max_element(arr.begin(),arr.end());
  int end=maxi;
  int ans;
  while(start<=end){
    int mid=start+(end-start)/2;

    if(sumOfDiv(arr,mid)<=limit){
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
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends