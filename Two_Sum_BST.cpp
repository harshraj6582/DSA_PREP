// void storeInorder(TreeNode* root , vector<int> &inorder){
//     // Base Case 
//     if(root == NULL){
//         return ; 
//     }
//     // LNR
//     storeInorder(root->left , inorder);
//     // N 
//     inorder.push_back(root->val);

//     // R 
//     storeInorder(root->right , inorder);
// }


// bool findTarget(TreeNode* root , int k ){
//     vector<int> inorder;
//     storeInorder(root , inorder);

//     // Find the target Sum from the Sorted Array 
//     int start = 0;
//     int end = inorder.size() - 1 ;

//     while(start < end )
//     {
//         int sum = inorder[start] + inorder[end];

//         if(sum == k ){
//             return true  ; 
//         }
//         else if (sum > k ){
//             end -- ;
//         }
//         else if (sum < k ){
//             start ++ ;
//         }
//     }
//     return false ; 

// }