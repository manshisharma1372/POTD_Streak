class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int i=0;
        int j=k-1;
        int sum=0;
        for(int y=i;y<=j;y++){
            sum+=nums[y];
        }
        
        int maxsum=sum;
        j++;
        while(j<nums.size()){
            sum-=nums[i++];
            sum+=nums[j++];
            maxsum=max(maxsum,sum);
        }
        
        double avg=maxsum/(double)k;
        return avg;
    }
};