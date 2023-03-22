class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        
        //o(n log n)
        /*
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        
        return -1;
        
        */
        
        
        //visited soln
        
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            
            int index=abs(nums[i]);
            
            //already visited?
            if(nums[index]<0){
                ans=index;
                break;
            }
            
            //mark it visited
            nums[index]*=-1;
            
        }
        return ans;
        
    }
};