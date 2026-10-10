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
    int helper(TreeNode* root, int& maxSum){
        if(root == NULL) return 0;

        int leftGain = max(0, helper(root->left, maxSum));
        int rightGain = max(0, helper(root->right, maxSum));

        int currSum = root->val + leftGain + rightGain;
        maxSum = max(maxSum, currSum);
        return root->val + max(leftGain, rightGain);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        helper(root, maxSum);
        return maxSum;
    }
};
