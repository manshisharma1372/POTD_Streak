class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0;
        for(auto it:nums){
            if(it<0){
                c++;
            }
            
            else if(it==0){
                return 0;
            }
        }
        
        if(c%2==0){
            return 1;
        }
        else
            return -1;
        
    }
};