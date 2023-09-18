class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
    vector<int> ans;
	int n=v.size();
	int limit=floor(n/3);
	map<int,int> m;
	for(int i=0;i<n;i++){
		m[v[i]]++;
	}

	for(auto it:m){
		if(it.second>limit){
			ans.push_back(it.first);
		}
	}

	return ans;
    }
};