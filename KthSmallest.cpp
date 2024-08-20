// As the Property of BST the Nodes are being in the SOrted ORder in 
// Inorder Traversal So we would be Tarversing the BST using the Inorder Traversal 
// And Keeping point of the K th smallest Element 

int kthSmallest(TreeNode* root , int& k ){
    
    if(root == NULL){
        return -1 ; 
    }

    int leftans = kthSmallest(root->left , k);
    if(leftans != -1 ){
        return leftans ; 
    }

    // Now Decrementing the Value of K 
    k--;

    if(k == 0)
    {
        return root->val ; 

    }

    // Right One 
    int rightans = kthSmallest(root->right , k );
    return rightans ; 
}