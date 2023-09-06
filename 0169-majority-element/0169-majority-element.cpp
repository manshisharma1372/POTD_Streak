class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ct=0;
        int elm;
        
        for(int i=0;i<nums.size();i++){
            
            if(ct==0){
                ct=1;
                elm=nums[i];
            }
            else if(nums[i]==elm){
                ct++;
            }
            else{
                ct--;
            }
        }
        //check algo incase majority elm do not exist
	
	int ct1=0;
	for(int i=0;i<nums.size();i++){
		if(nums[i]==elm){
			ct1++;
		}
	}
	if(ct1>nums.size()/2){
		return elm;
	}
	return -1;
    }
};