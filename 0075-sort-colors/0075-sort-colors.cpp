class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=0;
        int mid=0;
        int end=n-1;
        
        while(mid<=end){
            
            if(nums[mid]==0){
                
                swap(nums[start],nums[mid]);
                start++;
                mid++;
               
            }
            else if(nums[mid]==2){
                 swap(nums[end],nums[mid]);
                 end--;
                
                
            }
            else{
                mid++;
            }
        }
    }
};