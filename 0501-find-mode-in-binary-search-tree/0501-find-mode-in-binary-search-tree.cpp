/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    unordered_map<int,int> mp;
    
    void dfs(TreeNode* root){
        if(root==NULL){
            return;
        }
        
        dfs(root->left);
        mp[root->val]++;
        dfs(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        
        vector<int> res;
        int maxFreq=0;
        for(auto it:mp){
            if(it.second>maxFreq){
                maxFreq=it.second;
                res={};
                res.push_back(it.first);
            }
            else if(it.second==maxFreq){
                res.push_back(it.first);
            }
        }
        return res;
    }
};