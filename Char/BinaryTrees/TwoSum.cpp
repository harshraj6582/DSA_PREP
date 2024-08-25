// class Solution {
//     public : 
//     // This is just the case in which the following things has to be done 
//     void storeInorder(TreeNode* root , vector<int> &inorder)
//     {
//         // The Following base case is when the following 
//         if(root == NULL)
//         {
//             return ; 
//         }
//         // LNR   
//         storeInorder(root->left  , inorder);
//         // Now Basically perform the Operation 
//         inorder.push_back(root->val);
//         // R 
//         storeInorder(root->right , inorder);
//     }

//     bool findTarget(TreeNode* root , int k )
//     {
//         vector<int> inorder ; 
//         storeInorder(root , inorder);

//         // Find the Target using the 2 Pointer Approach 
//         int start =  ;
//         int end = inorder.size() - 1 ; 

//         while(start < end)
//         {
//             // This is basically the case we just have sorted Array 
//             int sum = inorder[start] + inorder[end];
//             // This is case in which the target has been achieved 
//             if(sum == k )
//             {
//                 return true ; 
//             }
//             else if(sum > k )
//             {
//                 end-- ; 
//             }
//             else{
//                 start++;
//             }
//         }
//         return true ; 
//         }
//     }
// }