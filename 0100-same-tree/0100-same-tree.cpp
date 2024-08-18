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
bool isSameTree(TreeNode* p, TreeNode* q){
     if(p == 0 && q == 0)
    {
        return true ; 
    }
    // This code is basically used to check if all the nodes are identical or not 
    // Traversing is done in the manner from bottom to up and there is only one codntion which is just checked if it return false then it is completely false 
    if(p && q)
    {
        return (p->val == q-> val ) && isSameTree(p->left , q->left) && isSameTree(p->right , q->right);
    }
    return false ; 
        
    
    }  
};