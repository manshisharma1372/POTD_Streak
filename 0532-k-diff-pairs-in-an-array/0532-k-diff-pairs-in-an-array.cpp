class Solution {
public:
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
};