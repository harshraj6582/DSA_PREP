class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    
    void inOrderHelper(Node* root , vector<int>& ans)
    {
     // Check for the Edge Cases 
     if(root == nullptr){
         return ;
     }
     inOrderHelper(root->left , ans);
     ans.push_back(root->data);
     inOrderHelper(root->right , ans );
    }
    
    vector<int> inOrder(Node* root) {
       // As we are using the Recursive Code so we need to check for the Non Returning Function
       vector<int> ans ; 
       inOrderHelper(root , ans);
       return ans ; 
    }
}