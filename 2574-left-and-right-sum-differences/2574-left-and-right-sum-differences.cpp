class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> leftsum(n,0);
        vector<int> rightsum(n,0);
        vector<int> ans;
       
        
        //leftsum
        int sum=0;
        for(int i=1;i<n;i++){
           sum+=nums[i-1];
            leftsum[i]=sum;
        }
        
        
        //rightsum
        
            sum=0;
            for(int j=n-2;j>=0;j--){
               
                sum+=nums[j+1];
                rightsum[j]=sum;
            }
        
        
        //final difference 
        for(int i=0;i<n;i++){
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return ans;
        
    }
};