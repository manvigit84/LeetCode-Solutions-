class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
         vector<vector<int>> ans;
        vector<int> path;

        solve(root, targetSum, path, ans);

        return ans;
    }

    void solve(TreeNode* root, int targetSum,
               vector<int>& path,
               vector<vector<int>>& ans) {

        // Empty node
        if (root == nullptr)
            return;

        // Add current node to path
        path.push_back(root->val);

        //Leaf node
        if (root->left == nullptr && root->right == nullptr) {

            if (root->val == targetSum) {
                ans.push_back(path);

                 path.pop_back();
            return;
        }
        }
        // Subtract current node value
        targetSum -= root->val;

        // Explorei left and right
        solve(root->left, targetSum, path, ans);
        solve(root->right, targetSum, path, ans);

        // Backtracking
        path.pop_back();
    }
};