class Solution {
public:
    
    int sumOfDiv(vector<int> &v,int mid){
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=ceil((double)(v[i])/(double) (mid));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int maxi=*max_element(nums.begin(),nums.end());
        int end=maxi;
        int ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(sumOfDiv(nums,mid)<=threshold){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};