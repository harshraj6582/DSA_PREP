class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
        return NULL ; 
    }

    if(p->val > root->val && q->val > root->val){
        TreeNode* ans = lowestCommonAncestor(root->right , p , q );
        return ans ; 
    }
    
    if(p->val < root->val  && q->val < root->val){
        TreeNode* ans2 = lowestCommonAncestor(root->left , p , q);
        return ans2 ; 
    }

    return root ; 
        
    }
};