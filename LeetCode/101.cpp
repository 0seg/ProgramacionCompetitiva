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

    bool mirror(TreeNode* leftptr, TreeNode* rightptr){
        if(leftptr == nullptr && rightptr == nullptr) return true;
        
        if(leftptr == nullptr || rightptr == nullptr) return false;

        if(leftptr->val != rightptr->val) return false;

        return mirror(leftptr->left, rightptr->right) and mirror(leftptr->right, rightptr->left);

            }

    bool isSymmetric(TreeNode* root) {

        TreeNode* leftptr = root->left;
        TreeNode* rightptr = root->right;
        return mirror(leftptr, rightptr);
        

     }
};