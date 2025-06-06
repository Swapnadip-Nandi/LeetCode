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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        queue<TreeNode*> q;
        q.push(root);

        vector<int> ans;
        while (!q.empty()) {
            int size = q.size();
            int cnt = 0;
            while (size--) {
                TreeNode* node = q.front();
                q.pop();
                if (cnt == 0) {
                    ans.push_back(node->val);
                    cnt++;
                }
                if (node->right) q.push(node->right);
                if (node->left) q.push(node->left);
            }
        }
        return ans;
    }
};