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


    TreeNode* maxValue(TreeNode* root){
        if(root == NULL){
            return NULL ; 
            // This is the Condition for the NULL 
        }

        if(root->right == NULL){
            return root ; 
        }

        return maxValue(root->right);
    }


    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == NULL)
        {
            // This is the Condition for No Nodes in the Tree 
            return NULL ; 
        }

        if(root->val == key)
        {
            // Data Found There are possibly 4 cases in which deletion can happen 
            if(root->left == NULL && root->right == NULL)
            {
                // This is case which has the Leaf Node matchinh 
                delete root ; 
                return NULL ;
            }

            else if(root->left != NULL && root->right == NULL)
            
            {
                // This is the Condition which is the case in which One of the Child is the 
                // Leaf Node 
                TreeNode* childSubtree = root->left ; 
                delete root ; 
                return  childSubtree ; 
            }
            else if(root->right != NULL && root->left == NULL)
            
            {
                // This is the Condition which is the case in which One of the Child is the 
                // Leaf Node 
                TreeNode* childSubtree = root->right ; 
                delete root ; 
                return  childSubtree ; 
            }
            else{
                // This is the condition in which both of the Nodes are being NULL

                TreeNode* maxi = maxValue(root->left);
                // Repalcement of the Node 
                root->val = maxi->val ; 
                root->left = deleteNode(root->left , maxi->val);
                return root ; 
            }
        }
        else if(root->val > key)
        {
            root->left = deleteNode(root->left  , key);
        }
        else{
            root->right = deleteNode(root->right ,  key) ; 
        }
        
        return root ; 
    }
};