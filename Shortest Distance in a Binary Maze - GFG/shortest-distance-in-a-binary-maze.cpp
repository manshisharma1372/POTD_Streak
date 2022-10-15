//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
         int n=grid.size();
          int m=grid[0].size();
          queue<pair<pair<int,int>,int>> q;
           vector<vector<int>> v={{0,1},{1,0},{0,-1},{-1,0}};
          q.push( make_pair(source,0));
              while(q.size())
              {   
            
                  pair<pair<int,int>,int> p=q.front();
                  q.pop();
                  int x=p.first.first;
                  int y=p.first.second;
                  int currdist=p.second;
                //   cout<<currdist<<" ";
                  if(p.first==destination)
                  {   
                      return currdist;
                  }
                  for(auto t:v)
                  {
                      int x1=x+t[0];
                      int y1=y+t[1];
                      if(x1 < n && y1 < m && x1>=0 && y1>=0 && grid[x1][y1]==1)
                      {
                          q.push(make_pair(make_pair(x1,y1),currdist+1));
                          grid[x1][y1]=0;
                      }
                  }
     
              }
               return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends