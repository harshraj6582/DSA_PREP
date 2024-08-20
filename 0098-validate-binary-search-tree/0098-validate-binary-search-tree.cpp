
class Solution {
public:
    bool solve(TreeNode* root , long long int lb , long long int ub){
        // Base Case for Null Binary Tree 
        if(root == NULL){
            return true ; 
        }

        bool cond1 = (root->val > lb);
        bool cond2 = (root->val < ub);

        bool leftAns = solve(root->left , lb , root->val);
        bool rightAns = solve(root->right , root->val , ub);

        if(cond1 && cond2 && leftAns && rightAns){
            return true ;
        }
        else{
            return false ; 
        }
    }



    bool isValidBST(TreeNode* root) {
        
        long long int lowerBound = -2147483657 ;
        long long int upperBound = 2147483657  ;

        bool ans = solve(root , lowerBound , upperBound);

        return ans ; 
         
    }
};