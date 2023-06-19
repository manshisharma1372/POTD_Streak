class Solution {
public:
    int findMin(vector<int>& arr) {
        
        int start=0;
        int end=arr.size()-1;
        int ans=INT_MAX;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            //is left half sorted
            if(arr[start]<=arr[mid]){
                ans=min(ans,arr[start]);
                start=mid+1;
            }
            //right half sorted
            else{
                ans=min(ans,arr[mid]);
                end=mid-1;
            }  
        }
        return ans;
    }
};