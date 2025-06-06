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
int findleft(struct TreeNode* root)
{
    int count=0;
    while(root!=NULL)
    {
        count++;
        root=root->left;
    }
    return count;
}
int findright(struct TreeNode* root)
{
    int count=0;
    while(root!=NULL)
    {
        count++;
        root=root->right;
    }
    return count;
}
    int countNodes(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int rh=findright(root);
        int lh=findleft(root);
        if(rh==lh)
        {
            return (1<<lh)-1;
        }
        else
        {
            return 1+countNodes(root->left)+countNodes(root->right);
        }
    }
};