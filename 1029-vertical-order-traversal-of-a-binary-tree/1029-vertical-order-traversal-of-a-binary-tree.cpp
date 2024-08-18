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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans ; 
        // This is basically used to store the answer 
        queue<pair<TreeNode* , pair<int , int >>> q ; 
        // This is stored for Traversing the Node for the Level Order Traversal 
        q.push({root , {0,0}});
        // This is basically just the base condition for the Queue Model 
        // For Stroing the Elements At a particular Coloumn and then the corresponding row along 
        // witht  the elements in the Tree Would be much helpful using the Multiset 
        // as this would be useful for Storing the elements in  Sorted Manner 
        map<int , map<int , multiset<int>>>mp ; 
        // This is just like for the corresponding Coloum and then the corresponding Row and 
        // Then the elements 
        while(!q.empty()){
            auto front = q.front() ; q.pop();
            TreeNode*&node = front.first;
            auto coordinate = front.second;
            int row = coordinate.first;
            int col = coordinate.second;

            mp[col][row].insert(node->val);
            if(node->left){
                q.push({node->left , {row + 1 , col -1 }});
            }
            if(node->right){
                q.push({node->right , {row + 1 , col + 1 }});
            }
        }

        // Store the Final Vertical Order into the Answer Vector 
        for(auto it : mp){
            auto&colMap = it.second;
            vector<int>vLine;
            for(auto colMapIt : colMap){
                auto&mset = colMapIt.second;
                vLine.insert(vLine.end() , mset.begin() , mset.end());
            }
            ans.push_back(vLine);
        }
        
        return ans ; 
        
    }
};