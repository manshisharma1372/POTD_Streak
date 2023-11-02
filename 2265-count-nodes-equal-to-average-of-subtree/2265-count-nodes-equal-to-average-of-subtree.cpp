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
    int ans=0;
    pair<int,int> averageAns(TreeNode* &root){
        
        if(root==NULL){
            return {0,0};
        }
        
        pair<int,int> leftSum=averageAns(root->left);
        pair<int,int> rightSum=averageAns(root->right);
        int totalSum= root->val+ leftSum.first+ rightSum.first;
        int totalNode=1+leftSum.second+rightSum.second;
        
        int average=totalSum/totalNode;
        
        if(average==root->val){
            ans++;
        }
        
        return {totalSum,totalNode};
    }
    int averageOfSubtree(TreeNode* root) {
        averageAns(root);
        return ans;
    }
};