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
    bool isCheck(TreeNode* p , TreeNode* q ){
        // Check for the Edge Cases when Both of the Nodes are Just Empty 
        if(p == 0 && q == 0){
            return true ; 
        }
        if(p && q ){
            return (p->val == q->val ) && isCheck(p->left , q->right) && isCheck(p->right, q->left);
        }
        return false ; 
    }
    bool isSymmetric(TreeNode* root) {

        return isCheck(root->left , root->right);
        
    }
};