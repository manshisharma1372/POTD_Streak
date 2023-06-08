class Solution {
public:
    
    vector<int> twoptr(vector<int> &v,int k,int x){
        
        int low=0;
        int high=v.size()-1;
        while(high-low>=k){
            if(x-v[low]>v[high]-x){
                low++;
            }
            
            else{
                high--;
            }
        }
        
        vector<int> ans;
        for(int i=low;i<=high;i++){
            ans.push_back(v[i]);
        }
        return ans;
    
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoptr(arr,k,x);
    }
};