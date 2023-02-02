//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
 void solve(int s, vector<int>adj[], vector<int>& temp, long long& ans, int visited[], int dfsVisited[]){

      visited[s] = 1;

      dfsVisited[s] = 1;

      temp.push_back(s);

      for(auto j : adj[s]){

          if(!visited[j]){

              solve(j, adj, temp, ans, visited, dfsVisited);

          }

          else{

              if(dfsVisited[j] == 1){

                  long long t = 0;

                  int status = 0;

                  for(auto it : temp){

                      if(it == j){

                          t+= it;

                          status = 1;

                      }

                      if(status == 1){

                          t+= it;

                      }

                  }

                  t-=j;

                  ans = max(ans,t);

                  temp.pop_back();

                  dfsVisited[s] = 0;

                  return;

              }

          }

      }

      temp.pop_back();

      dfsVisited[s] = 0;

  }
  long long largestSumCycle(int N, vector<int> Edge)
  {
    // code here
    
        vector<int>adj[N];

      for(int i=0;i<N;i++){

          if(Edge[i] != -1){

            adj[i].push_back(Edge[i]);  

          }

      }

      vector<int>temp;

      long long ans = -1;

      int visited[N] = {0};

      int dfsVisited[N] = {0};

      for(int i=0;i<N;i++){

          if(!visited[i]){

              solve(i, adj, temp, ans, visited, dfsVisited);

          }

      }

      return ans;
  }
};

//{ Driver Code Starts.
signed main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends