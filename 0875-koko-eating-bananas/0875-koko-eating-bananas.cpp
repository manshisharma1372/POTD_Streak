class Solution {
public:
    
  long long findTime(vector<int> arr,int hourly){

    long long totalHours=0;
    for(int i=0;i<arr.size();i++){
        totalHours+=ceil((double)arr[i]/(double)hourly);
    }
    return totalHours;
}
    int minEatingSpeed(vector<int>& v, int h) {
        
        int start=1;
   int maxi= *max_element(v.begin(),v.end());
   int end= maxi;
   int ans=INT_MAX;
   while(start<=end){
       int mid=start+(end-start)/2;
        if(findTime(v,mid)<=h){
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