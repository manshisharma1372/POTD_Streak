class Solution {
public:
    
    /*
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]<0){
                    count++;
                }
            }
        }
        return count;
        
    }
    */
    
     int countNegatives(vector<vector<int>>& grid) {
       int n=grid.size();
         int total=0;
         for(int i=0;i<n;i++){
             int curr=upper_bound(grid[i].rbegin(),grid[i].rend(),-1)-grid[i].rbegin();
             total+=curr;
         }
         
         return total;
    }
    
    
};