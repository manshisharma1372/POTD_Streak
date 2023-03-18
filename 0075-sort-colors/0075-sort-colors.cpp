class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // @method 1 cannot use
         //sort(nums.begin(),nums.end());
        
        
        
        //@method 2 counting method
        
        int count_zero=0;
        int count_ones=0;
        int count_two=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count_zero++;
            }
            
            else if(nums[i]==1){
                count_ones++;
            }
            else if(nums[i]==2){
                count_two++;
            }
            
        }
        
        for(int i=0;i<count_zero;i++){
            nums[i]=0;
        }
         for(int i=count_zero;i<count_zero+count_ones;i++){
            nums[i]=1;
        }
         for(int i=count_zero+count_ones;i<count_zero+count_ones+count_two;i++){
            nums[i]=2;
        }
        
    }
};