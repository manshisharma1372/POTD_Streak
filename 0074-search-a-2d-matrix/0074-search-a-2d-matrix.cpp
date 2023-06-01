class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        
        if(arr.size()==0){
            return false;
        }
        
        int n=arr.size();
        int m=arr[0].size();
        int low=0;
        int high=(n*m)-1;
        while(low<=high){
            
            long long mid=low+(high-low)/2;
            if(arr[mid/m][mid%m]==target){
                return true;
            }
            else if(arr[mid/m][mid%m]<=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return false;
    }
};