class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        	vector<int> ans;
	ans.push_back(arr[0]);
        int n=arr.size();
	for(int i=1;i<n;i++){
		if(ans.back()!=arr[i]){
			ans.push_back(arr[i]);
		}
	}
        
    arr.clear();
        for(auto it: ans){
            arr.push_back(it);
        }
	return arr.size();
    }
};