class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        long long l=0;
        long long r=0;
        long long total=0;
        long long res=0; //sliding window uska size
        
        while(r<nums.size()){
            
            //expanding
            total+=nums[r];
            
            while(nums[r]*(r-l+1)>total+k){
                
                //shrink
                total-=nums[l];
                l++;
            }
            
            res=max(res,r-l+1); //max window size
            r++;
                
            }
        return res;
        
    }
};