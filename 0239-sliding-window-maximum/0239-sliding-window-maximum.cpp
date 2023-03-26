class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        multiset<int> window;
 vector<int>ans;
 
 int j;
 for(j=0;j<k;j++){
     window.insert(arr[j]);
 }
 
 int max_elm= *(window.rbegin());
 ans.push_back(max_elm);
 
 int i=0;
 while(j<arr.size()){
     
 
     auto it=window.find(arr[i]);
     window.erase(it);
     
     window.insert(arr[j]);
     ans.push_back(*(window.rbegin()));
     i++;
     j++;
     
     
 }
        return ans;
    }
};