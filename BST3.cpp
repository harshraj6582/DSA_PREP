// // // Convert the BST into DOubly Link list 
// // //           100
// //              /  \
// //             50   200
// //           /        \
// //        5           600

// // // Output :
// //     tree left right 
// //     tree into LL ; left => prev and right => next 
// //     BST -> Doubly LL 

// //     5

// // Covert Sorted List to Binary Search Tree 

// void ConvertBSTtoSLL(Node* root , Node* &head){
//     // If the Root is Beibng Null Return the Equation 
//     if(root == NULL){
//         return ; 
//     }
//     // Using the Logic of RNL 
//     // Because of the Following things as the head would be attached to the Right part 
//     // first then the Root Part would be attached to the Right Part and then the Left Part of the Tree would be 
//     // Attached to the Root and Root is Automatically being attached to the Right part 

//     // RNL 

//     // R 
//     ConvertBSTtoSLL(root->right , head);

//     // N 
//     root->right = head ; 
//     if(head != NULL){
//         head->left = root ; 
//     }
//     head = root ; 

//     // L 
//     ConvertBSTtoSLL(root->left , head);
// }