 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        //if root is null pointer
        if(root == nullptr)
         return false;

        //if it is a leaf node
         if(root->left == nullptr && root->right == nullptr){
            return root->val == targetSum;
         }

         //update target sum
         targetSum -= root->val;

         return hasPathSum(root->left , targetSum) || hasPathSum(root->right , targetSum);

    }
};