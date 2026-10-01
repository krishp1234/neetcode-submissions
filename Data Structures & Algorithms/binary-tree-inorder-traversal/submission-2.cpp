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
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<int> final;
        dfs(root, final);
        return final;
    }
    void dfs(TreeNode* root, vector<int>& final){
        if(!root){
            return;
        }
        dfs(root->left, final);
        final.push_back(root->val);
        dfs(root->right, final);
    }

};