class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int diff=nums[1]-nums[0];
            for(int i=2;i<nums.size();i++){
                int new_diff=nums[i]-nums[i-1];
                if(new_diff!=diff){
                    return false;
                }
                
              
            }
          return true;
    }
};