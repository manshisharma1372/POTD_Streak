class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int temp;
                temp=nums[count];
                nums[count]=nums[i];
                nums[i]=temp;
                count++;
            }
        }
    }
};