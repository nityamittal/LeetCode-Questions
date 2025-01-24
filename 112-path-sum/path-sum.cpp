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
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        if(root==nullptr)
        return false;
        
        if(root->left==nullptr and root->right==nullptr)
        {
            if((targetSum - root->val)==0)
            return true;
            else
            return false;
        }
        
        

        int newTarget = targetSum - root->val;
        bool left = hasPathSum(root->left, newTarget);
        bool right = hasPathSum(root->right, newTarget);

        return (left or right);
        
    }
};