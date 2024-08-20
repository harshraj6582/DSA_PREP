class Solution {
public:

    void storeInorder(TreeNode* root  , vector<int>& inorder)
    {
        // This would be used for the traversing the BST using the Inorder 
        // Base Cases 
        if(root == NULL){
            return ; 
        }
        // L 
        storeInorder(root->left , inorder);
        // N 
        inorder.push_back(root->val);
        // R 
        storeInorder(root->right , inorder);


    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder ; 
        storeInorder(root , inorder);

        // Now the Inorder Array Contains the element in Sorted Order 
        // So find the Target Sum 
        int start = 0 ;
        int end = inorder.size() - 1 ;

        while(start < end ){
            int sum = inorder[start] + inorder[end];

            if(sum == k ){
                return true ; 
            }
            else if ( sum > k ){
                end-- ; 
            }
            else if (sum < k ){
                start ++ ; 
            }
        }
        return false ; 
        
    }
};