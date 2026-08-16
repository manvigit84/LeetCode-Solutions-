class Solution {
public:
    int minDepth(TreeNode* root) {
        
        if(root == nullptr)
         return 0;

         int left = minDepth(root->left);
         int right = minDepth(root->right);

        //when only right child exists
        if(left == 0)
         return 1 + right;

         //when only left child exists
        if(right == 0)
         return 1 + left;

         //when both children exist
         
        return 1 + min(left , right);

    }
};