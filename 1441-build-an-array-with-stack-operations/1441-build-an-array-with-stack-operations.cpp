class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       vector<int> arr(n);
       vector<string> ans;
        
        int last=target.size();
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
       }
        
        int i=0;
        int j=0;
        while(i<n && j<last){
            
            
             if(target[j]==arr[i]){
                 ans.push_back("Push");
                 j++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            i++;
        }
     
        return ans;
    }
};