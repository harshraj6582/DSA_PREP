// // The special Charcteristics of BST is that The Node Value are being in the Sorted Order 

// TreeNode* lowestCommonAncestor(TreeNode* root , TreeNode* p , TreeNode* q )
// {
//     if(root == NULL){
//         return NULL ; 
//     }

//     if(p->val > root->val && q->val > root->val){
//         TreeNode* ans = lowestCommonAncestor(root->right , p , q );
//         return ans ; 
//     }
    
//     if(p->val < root->val  && q->val < root-val){
//         TreeNode* ans2 = lowestCommonAncestor(root->left , p , q);
//         return ans2 ; 
//     }

//     return root ; 

//     // Else If None of the ABove COndition is Being True it means One of the Them 
//     // Must in the Differnt Node so The Answer would be Root 




// }