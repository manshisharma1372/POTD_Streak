class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        
        long long total= (n*(n+1))/2;
        int ans=total-sum;
        return ans;
    }
};