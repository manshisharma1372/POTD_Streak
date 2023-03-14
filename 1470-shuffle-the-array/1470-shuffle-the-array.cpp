class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        //extra space--->my soln
        /*
        int size=nums.size();
        vector<int> x;
        vector<int> y;
        vector<int> ans;
        for(int i=0;i<n;i++){
            x.push_back(nums[i]);
        }
        
        for(int i=n;i<size;i++){
            y.push_back(nums[i]);
        }
        
        for(int i=0;i<n;i++){
            ans.push_back(x[i]);
            ans.push_back(y[i]);
        }
        return ans;
        */
        
        //o(1)
          int first = 0, second = n, max = 1001;
        //max is 1+10^3(given)
        
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(i%2==0) //even
            nums[i]=(nums[first++]%max)*max + nums[i];
            else
            nums[i]=(nums[second++]%max)*max + nums[i];
        }
        for(int i=0;i<size;i++)
        nums[i]/=max;
        return nums;
        
    }
};