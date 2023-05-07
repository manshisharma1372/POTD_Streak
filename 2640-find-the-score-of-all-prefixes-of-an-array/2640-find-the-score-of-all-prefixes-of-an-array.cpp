class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
         std::vector<long long> ans(nums.size());
    std::vector<long long> res(nums.size());

    int max_num = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        max_num = std::max(max_num, nums[i]);
        ans[i] = nums[i] + max_num;
    }

    for (int i = 0; i < ans.size(); i++) {
        if (i == 0) {
            res[i] = ans[i];
        } else {
            res[i] = res[i - 1] + ans[i];
        }
    }

    return res;
        
    
    }
};