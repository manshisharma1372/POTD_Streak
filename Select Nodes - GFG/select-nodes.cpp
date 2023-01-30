//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
     void dfs(const vector<vector<int>>& nodes, const int src, const int act, vector<pair<int, int>>& dp) {
	for (const auto & i : nodes[src])
		if (i != act) dfs(nodes, i, src, dp);
	for (const auto& i : nodes[src])
		if (i != act) {
			dp[src].first += dp[i].second;
			dp[src].second += min(dp[i].first, dp[i].second);
		}
}
  
    int countVertex(int N, vector<vector<int>>edges){
        // code here
        
        vector<vector<int>> nodes(N);
	for (const auto & e : edges) {
		nodes[e[0] - 1].push_back(e[1] - 1);
		nodes[e[1] - 1].push_back(e[0] - 1);
	}
	vector<pair<int, int>> dp(N, { 0, 1 });
	dfs(nodes, 0, 0, dp);
	return min(dp[0].first, dp[0].second);
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
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends