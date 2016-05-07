// https://www.interviewbit.com/problems/inorder-traversal/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> res;
    if(A == NULL) return res;
    stack<TreeNode*> S;
    // S.push(A);
    while(1){
        if(A != NULL){
            S.push(A);
            A = A->left;
        }
        else{
            if(S.empty()) break;
            A = S.top();
            res.push_back(A->val);
            S.pop();
            A = A->right;
        }
    }
    return res;
}
