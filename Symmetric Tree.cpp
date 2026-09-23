// 101. Symmetric Tree

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    bool mirror(TreeNode* l, TreeNode* r) {
        if (l == nullptr && r == nullptr) {
            return true;
        } else if ((l != nullptr && r == nullptr) || (l == nullptr && r != nullptr)) {
            return false;
        }

        return l->val == r->val && mirror(l->left, r->right) && mirror(l->right, r->left);
    };

public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        return mirror(root->left, root->right);
    }
};