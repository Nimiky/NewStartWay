//前序遍历 DLR
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
//顺序： 中->左->右
class Solution {
public:
    void preOrder(TreeNode *root,vector<int> &res)
    {
        if(root == NULL) return;
        res.push_back(root->val);
        preOrder(root->left,res);
        preOrder(root->right,res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preOrder(root,res);
        return res;

    }
};
//中序遍历LDR
class Solution {
public:
    void inOrder(TreeNode *root,vector<int> &res)
    {
        if(root == nullptr) return;
        inOrder(root->left,res);
        res.push_back(root->val);
        inOrder(root->right,res);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inOrder(root,res);
        return res;

    }
};
//后序遍历LRD
class Solution {
public:
    void postOrder(TreeNode *root,vector<int> &res)
    {
        if(root == nullptr) return;
        postOrder(root->left,res);
        postOrder(root->right,res);
        res.push_back(root->val);

        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postOrder(root,res);
        return res;

    }
};