class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum=0;
        for(int i=0;i<=nums.size();i++){
            sum+=i;
        }
        
        int arrSum=0;
        for(int i=0;i<nums.size();i++){
            arrSum+=nums[i];
        }
        
        int missing=sum-arrSum;
        return missing;
    }
};