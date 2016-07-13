/*

   104. Maximum Depth of Binary Tree  QuestionEditorial Solution  My Submissions
   Total Accepted: 157947
   Total Submissions: 324387
Difficulty: Easy
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Subscribe to see which companies asked this question

 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root==NULL) return 0;
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    return r>l?r+1:l+1;
}

