// // This code is used to Conver the Given Doubly Linked List to the BST 
// Node* convertDLLtoBST(Node* &head , int n ){
//     // base case 
//     if(head == NULL || n <= 0){
//         return NULL ; 
//     }

//     // Following the Approach of LNR 
//     Node* left = convertDLLtoBST(head , n/2);

//     // N 
//     Node * root = head ; 
//     root->left = left ; 

//     // Head Update 
//     head = head->right ; 


//     //R 
//     Node* rightSubtree = convertDLLtoBST(head , n - n/2 -  1);
//     root->right = rightSubtree; 
//     return root ; 
// }