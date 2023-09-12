class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int maxCount=INT_MIN;
        int rownum;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            int ct=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    ct++;
                }
            }
            if(ct>maxCount){
                maxCount=ct;
                rownum=i;
            }
        }
        
        ans.push_back(rownum);
        ans.push_back(maxCount);
        
        return ans;
    }
};