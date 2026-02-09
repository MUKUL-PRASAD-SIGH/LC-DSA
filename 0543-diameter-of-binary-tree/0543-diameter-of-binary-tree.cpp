class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        depth(root, diameter);
        return diameter;
    }

    int depth(TreeNode* root, int &diameter) {
        if(root == NULL) return 0;

        int lh = depth(root->left, diameter);
        int rh = depth(root->right, diameter);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }
};
