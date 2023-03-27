class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //o(n^2)
        /*
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                ans=max(ans,sum);
            }
            
        }
        return ans;
        
        */
        
        
        //o(n) soln Kadane's algo
        int ans=INT_MIN;
        int sum=0;
        for(auto it:nums){
            sum+=it;
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
        }
        return ans;
    }
};