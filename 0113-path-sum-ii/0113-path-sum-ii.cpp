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
        void Solve(TreeNode* root, int targetSum , vector<vector<int>>& ans , vector<int> temp, int sum  )
        {
            if(root == NULL){
                return ; 
            }
            
            sum += root->val;
            temp.push_back(root->val);
            if(root->left == NULL && root->right == NULL){
                // This is being a Leaf Node 
                if(sum == targetSum){
                    ans.push_back(temp);
                }
                else{
                   
                    return ; 
                }
            }
            Solve(root->left, targetSum , ans , temp , sum);
            Solve(root->right, targetSum , ans , temp , sum);
           


        }

        vector<vector<int>> pathSum(TreeNode* root, int targetSum)
         {
        vector<vector<int>> ans ; 
        vector<int> temp ; 
        int sum = 0 ;
        Solve(root , targetSum , ans , temp  , sum);
        return ans ; 
    }
};