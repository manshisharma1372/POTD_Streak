class Solution {
public:
    int getWinner(vector<int>& arr, int k) {

       int ans=arr[0];
        int consecutiveCount=0;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]>ans){
                ans=arr[i];
                consecutiveCount=0;
            }
            
            consecutiveCount++;
            if(consecutiveCount==k){
                break;
            }
        }
        return ans;
    }
};