class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        //O(N)
        
        /*
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[nums[i]]);
        }
        
        return ans;
        */
        
        
        //O(1)
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+(n*(nums[nums[i]]%n));
        }
        for(int i=0;i<n;i++){
            nums[i]/=n;
        }
        return nums;
    }
        
    
};