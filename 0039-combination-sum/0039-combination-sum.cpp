class Solution {
public:
    
   void findCombination(int ind,vector<int>&arr,int target,vector<vector<int>> &ans,vector<int> &ds){
        
        if(ind==arr.size()){
            
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        //pick 
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);

            findCombination(ind,arr,target-arr[ind],ans,ds);
            
            ds.pop_back();
        }
        
        findCombination(ind+1,arr,target,ans,ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int index=0;
        findCombination(index,candidates,target,ans,ds);
        return ans;
        
        
    }
};