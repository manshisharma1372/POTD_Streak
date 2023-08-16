class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        
        //first window of k size
        for(int i=0;i<k;i++){
            
            //choteb elm remove krdo
            while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            //insert at end
            dq.push_back(i);  
        }
        
        //store ans pf first window
        ans.push_back(nums[dq.front()]);
        
        //remaining window
        for(int i=k;i<nums.size();i++){
            //out of window elm remove
            if(!dq.empty() && i-dq.front()>=k){
                dq.pop_front();
            }
            
             while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            //insert
            dq.push_back(i);
            
            //ans of curr window
            ans.push_back(nums[dq.front()]);
        }
        return ans;
            
    }
        
};