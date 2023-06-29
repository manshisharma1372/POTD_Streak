class Solution {
public:
    
    int findDays(vector<int> &wt,int cap){
    int days=1;
    int load=0;
    for(int i=0;i<wt.size();i++){
        if(load+wt[i]>cap){
            days++;
            load=wt[i];
        }
        else{
            load+=wt[i];
        }
    }
    return days;
}

    
    int shipWithinDays(vector<int>& weights, int d) {
        
    int maxi=*max_element(weights.begin(),weights.end());
    int start=maxi;
    int sum=accumulate(weights.begin(),weights.end(),0);
    int end=sum;
    int ans;
    while(start<=end){

        int mid=start+(end-start)/2;

        if(findDays(weights,mid)<=d){
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