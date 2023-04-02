class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int low=0;
            int high=nums.size()-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            int mid=low+(high-low)/2;
        }
        return -1;
    }
};