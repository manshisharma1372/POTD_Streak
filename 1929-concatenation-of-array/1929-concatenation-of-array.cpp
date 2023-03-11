class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        
        //with extra space
        /*
        long long n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            
            ans.push_back(nums[i]);
        }
           for(int i=0;i<n;i++){
            
            ans.push_back(nums[i]);
        }
        return ans;*/
        
        //withput extra space 
        long long n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        return nums;
        
    }
};