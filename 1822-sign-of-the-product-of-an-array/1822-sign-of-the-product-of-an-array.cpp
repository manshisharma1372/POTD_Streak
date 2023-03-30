class Solution {
public:
    int arraySign(vector<int>& nums) {
         int countNeg = 0;
        for(auto x: nums){
            if(x < 0)
                countNeg++;
            else if(x == 0)
                return 0;
        }
        if(countNeg%2 ==0)
            return 1;
        return -1;
    }
};