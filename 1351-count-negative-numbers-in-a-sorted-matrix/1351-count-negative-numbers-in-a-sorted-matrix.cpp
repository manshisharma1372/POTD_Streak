class Solution {
public:
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
};