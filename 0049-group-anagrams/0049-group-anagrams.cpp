class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string,vector<string>> m;
        
        for(auto str: strs){
            string curr=str;
            sort(curr.begin(),curr.end());
            m[curr].push_back(str);
        }
        
        vector<vector<string>> ans;
        
        for(auto it:m){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};