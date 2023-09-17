class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        
        k=k% nums.size();
        //1. reverse (0,n-1)
        
        reverse(nums.begin(),nums.end());
        
        //2. reverse (0,k-1)
        
                           reverse(nums.begin(),nums.begin()+k);
        
        
        //3. reverse (k+1,n)
       reverse(nums.begin()+k,nums.end());  
        
        
    }
};