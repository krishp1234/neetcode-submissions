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

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //Input: preorder = [1,2,3,4], inorder = [2,1,3,4]
        //Output: [1,2,3,null,null,null,4]
        if(preorder.empty() || inorder.empty()){
            return nullptr;
        }
        TreeNode *root = new TreeNode(preorder[0]);
        auto it = find(inorder.begin(), inorder.end(),
        preorder[0]);
        int mid_index = it - inorder.begin();

        vector<int> leftPart_preorder(preorder.begin() + 1, 
        preorder.begin() + mid_index + 1);

        vector<int> leftPart_inorder(inorder.begin(), 
        inorder.begin() + mid_index);

        vector<int> rightPart_preorder(preorder.begin() + 
        mid_index + 1, preorder.end());

        vector<int> rightPart_inorder(inorder.begin() + 
        mid_index + 1, inorder.end());

        root->left = buildTree(leftPart_preorder, leftPart_inorder);
        root->right = buildTree(rightPart_preorder, rightPart_inorder);

        return root;


    }
};
