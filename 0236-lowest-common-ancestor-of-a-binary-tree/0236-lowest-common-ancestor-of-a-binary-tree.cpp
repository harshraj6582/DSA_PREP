/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base Cases 
        if(root == NULL) return NULL ;
        if(root->val == p->val) return p ;
        if(root->val == q->val) return q ; 

        TreeNode* la = lowestCommonAncestor(root->left , p , q );
        TreeNode* ra = lowestCommonAncestor(root->right , p , q );

        if(la == NULL && ra == NULL) return NULL;
        else if (la != NULL && ra == NULL) return la ;
        else if (la == NULL && ra != NULL) return ra ;
        else{
            return root ; 
        }

        
    }
};