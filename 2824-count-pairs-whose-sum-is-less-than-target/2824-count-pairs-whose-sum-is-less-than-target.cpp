class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        
    int sz=nums.size();
    int c = 0;
    for (int i = 0; i < sz; ++i) {
        for (int j = i + 1; j <sz; ++j) {
            if (nums[i] + nums[j] < target) {
                c++;
            }
        }
    }
    
    return c;
    }
};