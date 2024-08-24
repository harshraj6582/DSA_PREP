// class Solution {
//     public : 
//         int kthSmallest(TreeNode* root , int &k) {
//             if(root == NULL)
//             {
//                 return -1 ; 
//             }

//             // LNR 
//             //L 
//             int leftAns = kthSmallest(root->left , k );
//             if(leftAns != -1){
//                 return leftAns ; 
//             }

//             // N 
//             k-- ; 
//             if(k == 0) {
//                 return root->val ; 
//             }

//             // R 
//             int rightANs = kthSmallest(root->right , k );
//             return rightANs ; 
//         }

//         // So basically we are just traversing the Binary tree from the Left Most Side 
//         // Firstly we are jsut traversing thr Pointer from the Root to the extreme 
//         // left portion of the Tree So that we can get the minimium possible valiue of the 
//         // Tree 

//         class Solution {
//             public : 
//                 int kthSmallest(TreeNode* root , int &k){
//                     // Check for the Empty Condition for the Root Node 
//                     if(root == NULL){
//                         return -1 ;
//                     }
//                     // We will use the case for the LNR Traversing 
//                     int leftAns = kthSmallest(root->left , k );
//                     if(leftAns != -1){
//                         return leftAns;
//                     }
//                     // Now we have the decrement the value of K so that 
//                     // we can get the possible smallest value of the Node 
//                     // N 
//                     k-- ;
//                     if(k == 0){
//                         return root->val ; 
//                     }
//                     //R 
//                     int rightAns = kthSmallest(root->right , k );
//                     return rightAns; 

//                     // As we have to pass the smallest value from the case in which is just possible 

//                 }
//         }
// }