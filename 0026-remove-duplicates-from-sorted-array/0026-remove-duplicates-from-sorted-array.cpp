class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //two pointer approach
        int i=0;
        int j=i+1;
        while(j<nums.size()){
            
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
            j++;
            
        }
        return i+1;
        
    }
};