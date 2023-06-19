class Solution {
public:
    int search(vector<int>& arr, int k) {
        int start=0;
        int end=arr.size()-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==k){
                return mid;
            }
            
            //check left sorted?
            else if(arr[start]<=arr[mid]){
                if(arr[start]<=k && k<=arr[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            
            //check right sorted
            else{
                if(arr[mid]<=k && k<=arr[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
                
            }
        }
        return -1;
    }
};