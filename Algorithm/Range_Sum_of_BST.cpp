// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  int rangeSumBST(TreeNode *root, int L, int R) {
    int sum = 0;
    if (root) {
      if (L <= root->val && root->val <= R) {
        sum += root->val;
      }
      if (root->left)
        sum += rangeSumBST(root->left, L, R);
      if (root->right)
        sum += rangeSumBST(root->right, L, R);
    }
    return sum;
  }
};
