class Solution {
public:
    
    /*
    int findPairs(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        int i=0;
        int j=i+1;
        set<pair<int,int>> ans;
        
        while(j<nums.size()){
            int diff=nums[j]-nums[i];
            
            if(diff==k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff<k){
                j++; //expand
            }
            else{
                i++;//shrink
            }
            if(i==j){
                j++;
            }
        }
        return ans.size();
    }
    */
    int bs(vector<int>&v,int start,int x){
        
        int end=v.size()-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            
            if(v[mid]==x){
                return mid;
            }
            
            else if(v[mid]>x){
                end=mid-1;
            }
            
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    
    int findPairs(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        set<pair<int,int>> ans;
        
        for(int i=0;i<nums.size();i++){
            if(bs(nums,i+1,nums[i]+k) != -1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
        
    }
    
    
};