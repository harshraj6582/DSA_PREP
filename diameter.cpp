// // TO Find the Diameter of the Binary tree 
// // Right Depth + Left Depth = Longest Path 
// // For each Node this is consuming the complexity of O(N^2)

// // Keep Track of HEight on the way 

// // int diameter = 0 ;


// // int Height(Node* root){
// //     if(roo== NULL){
// //         return 0 ;
// //     } 
    
// //     int lh = height(root->left);
// //     int rh = height(root->right);
// //     int currentd = lh + rh ; 
// //     D = max(D , currD);
// //     return max(lh , rh) + 1 ;
// // }

// // Fast Way to Fing Height of Balanced Tree 
// // (Lh - rh ) <= 1 

// // Are two Trees Identical 
// // Same Tree -- This can be checked using the concept of PreOrder traversal 

// // bool isSameTree(TreeNode * p , TreeNode* q ){
// //     if(p == 0 && q == 0){
// //         return true ; 
// //     }
// //     if(!p && !q){
// //         return (p->val == q-> val ) && isSameTree(p->left , q->left) && isSameTree(p->right , p->right);
// //     }
// //     return false ; 
// // }


// // To Find the Symmetric or not 
// if(p->left == 0 && p->right == 0){
//     return true ; 
// }
// if(p->left && p->right ){
//     // This means there is some sort or node 
//     return (p->left->val == p->right->val) && function(p->left->left)
// }


// Diaginal Traversal of Binary Tree 
