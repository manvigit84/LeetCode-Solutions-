class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       
        if(root == nullptr)
         return nullptr;

        if(p == root || q ==  root)
        return root;
       
       TreeNode* left = lowestCommonAncestor(root->left , p, q);
       TreeNode* right = lowestCommonAncestor(root->right , p, q);

       //p and q found different sides
       if(left != nullptr && right!= nullptr)
        return root;

        if(left != nullptr)
         return left;

         return right;
        }
};