class Solution {
public:
    
    
    /*
    void first_occurence(vector<int> arr,int target,vector<int> &ans){
    
    int start=0;
    int end=arr.size()-1;
    
    int mid=start+(end-start)/2;
    int final_ans=-1;
    while(start<=end){
        int elm=arr[mid];
        
        if(elm==target){
            //ans store
           final_ans=mid;
            //left search
            end=mid-1;
        }
        
        else if(elm<target){
            //right search
            start=mid+1;
        }
        
        else if(elm>target){
            //left search
            end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
    
    ans.push_back(final_ans);
    
}
    
    
    void last_occurence(vector<int> arr,int target,vector<int> &ans){
    
    int start=0;
    int end=arr.size()-1;
    
    int mid=start+(end-start)/2;
    int final_ans=-1;
    while(start<=end){
        int elm=arr[mid];
        
        if(elm==target){
            //ans store
           final_ans=mid;
            //left search
            start=mid+1;
        }
        
        else if(elm<target){
            //right search
            start=mid+1;
        }
        
        else if(elm>target){
            //left search
            end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
    
    ans.push_back(final_ans);
    
}
    
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        first_occurence(nums,target,ans);
        last_occurence(nums,target,ans);
        return ans;
    }
    
    */
    
    
    
    
    
    
    
    
    
    
    //using stl
    
    vector<int> searchRange(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(),nums.end(),target);
        auto up = upper_bound(nums.begin(),nums.end(),target);
        
        if(low == nums.end() || *low != target)    return {-1,-1};
        
        int first = low - nums.begin();
        int last = up - nums.begin()-1;
        
        return {first ,last};
    }
     
};