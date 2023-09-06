class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ct=0;
        int elm;
        
        for(int i=0;i<nums.size();i++){
            
            if(ct==0){
                ct=1;
                elm=nums[i];
            }
            else if(nums[i]==elm){
                ct++;
            }
            else{
                ct--;
            }
        }
        return elm;
        
    }
};