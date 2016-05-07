https://www.interviewbit.com/problems/preorder-traversal/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> res;
    if(A == NULL) return res;
    stack<TreeNode*> S;
    S.push(A);
    while(!S.empty()){
        A = S.top();
        res.push_back(A->val);
        S.pop();
        if(A->right != NULL)
            S.push(A->right);
        if(A->left != NULL)
            S.push(A->left);
    }
    return res;
}
