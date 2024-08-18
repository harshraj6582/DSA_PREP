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

    bool ans(TreeNode* root , int targetSum , int sum )
    {
        // Calculate the Sum of traversal 
        // Edge Case Check whether this is a Leaf Node or not 
        if(root == NULL){
            return false ;
        }
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            // This means this is a leaf Node 
            if(sum == targetSum){
                return true ;
            }
            else {
                return false ; 
            }
        }
       bool la =  ans(root->left , targetSum , sum);
       bool ra =  ans(root->right , targetSum , sum);

       return la||ra ; 
    }



    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0 ;
        bool a1 = ans(root , targetSum , sum);
        return a1 ; 
        
    }
};