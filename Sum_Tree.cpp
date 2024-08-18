// // This is basically used for performing the Sum of the Tree 

// void toSumTree(Node* node){
//     // Convert the Tree into the Sum Tree Format this is basically a condtion 
//     // in which the Node is the Sum of the LEft as well as the Right Children 
//     sum(node);
// }

// int sum(Node* root)
// {
//     // Return the Value of the Root when it is basically empty 
//     if(!root){
//         return  0 ; 
//     }
//     if(!root->left && !root->right){
//         int temp = root->data ;
//         root->data   = 0 ;
//         return temp ; 
//     }
//     int lsum = sum(root->left);
//     int rsum = sum(root->right);
//     int temp = root->data ;
//     root->data = lsum + rsum ;
//     return root->data +  temp ; 

// }