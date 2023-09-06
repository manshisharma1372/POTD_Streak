class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            
            int bk=nums[i];
            int need=target-bk;
            if(m.find(need)!=m.end()){
                return {m[need],i};
            }
            
            m[bk]=i;
        }
        
        return {-1,-1};
    }
};