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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // As we are Going to  return a vector of vector 
        vector<vector<int>> ans ; 
        bool LtoRdir = true ; 
        if(root == NULL){
            // Then Return the Empty Vector as the Root is just empty 
            return ans ; 
        }
        queue<TreeNode* > q ; 
        q.push(root);
        // This is basically used to insert the elements in the queue so that the Level Order Traversal is being Possible 
        while(!q.empty())
        {
            int width = q.size() ;
            vector<int> LevelOne(width);

            // The Loop for Inserting Certain Elements which are being present in the Queue 
            for(int i = 0 ; i < width ; i++){
                // Dequeue the Queue Element so that WE Insert them into the array 
                TreeNode* front = q.front() ; q.pop();
                int index = LtoRdir ? i : width - i - 1 ;
                LevelOne[index] = front->val ; 

                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            ans.push_back(LevelOne);
            LtoRdir = !LtoRdir ;
        }
        return ans ; 
        

    }
};