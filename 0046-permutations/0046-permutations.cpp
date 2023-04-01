class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        // for OA
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        auto temp=nums;
        
        do{
            ans.push_back(temp);
            next_permutation(temp.begin(),temp.end());
        }
        while(temp!=nums);
        
        return ans;
    }
};