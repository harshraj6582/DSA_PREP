/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int height(TreeNode* root){
        if(root == NULL){
            return  0 ;
        }

        int leftans = height(root->left);
        int rightans = height(root->right);
        int ans = max(leftans , rightans) + 1 ;
        return ans ; 
    }



    bool isBalanced(TreeNode* root) {
        // To check if the following tree is being Balanced or not 
        // SO that the differnce between the Two Nodes is not more than 1 

        // Conditions to be Check 
        // 1- If the Left Part of Tree is being Balanced 
        // 2- If the Right Part of the Tree is being Balanced 
        // 3- The Differnce between the LEft and the right is not more than 1 


        // If the Root is being NULL so the Tree is already balanced 
        if(root == NULL){
            return true ; // BASE CASE 
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int dif = abs(leftHeight-rightHeight);

        bool currentNodeAns = (dif <=1);

        bool leftans = isBalanced(root->left);
        bool rightans = isBalanced(root->right);


        if(currentNodeAns && leftans && rightans){
            return true ; 
        }
        else{
            return false ; 
        }



        
    }
};