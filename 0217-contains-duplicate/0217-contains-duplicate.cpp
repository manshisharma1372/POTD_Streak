class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int elm=nums[i];
            m[elm]++;
        }
        for(auto it:m){
            if(it.second>=2){
                return true;
            }
        }
        
        return false;
        
    }
};