class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        long long n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            
            ans.push_back(nums[i]);
        }
           for(int i=0;i<n;i++){
            
            ans.push_back(nums[i]);
        }
        return ans;
        
    }
};