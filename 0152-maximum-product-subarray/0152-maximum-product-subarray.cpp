class Solution {
public:
    int maxProduct(vector<int>& arr) {
        
        int maxi=INT_MIN;
        int n=arr.size();
        int pref=1;
        int suf=1;
        
        for(int i=0;i<n;i++){
            if(pref==0){
                pref=1;
            }
            if(suf==0){
                suf=1;
            }
            
            pref*=arr[i];
            suf*=arr[n-i-1];
            maxi=max(maxi,max(pref,suf));
        }
        return maxi;
    }
};