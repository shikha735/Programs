// https://www.interviewbit.com/problems/postorder-traversal/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> res;
    if(A == NULL) return res;
    stack<TreeNode*> S1, S2;
    S1.push(A);
    while(!S1.empty()){
        A = S1.top();
        S1.pop();
        S2.push(A);
        if(A->left != NULL)
            S1.push(A->left);
        if(A->right != NULL)
            S1.push(A->right);
    }
    while(!S2.empty()){
        A = S2.top();
        res.push_back(A->val);
        S2.pop();
    }
    return res;
}
