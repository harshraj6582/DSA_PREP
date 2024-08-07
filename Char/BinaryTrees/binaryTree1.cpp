// We are going to impleement Binary Trees 
#include<iostream>
#include<queue>
using namespace std ;

class BinaryTree {
    public:
    int data ; 
    BinaryTree* left ;
    BinaryTree* right ;
    // All the Data Member for the Tree 
    // Calling of the constrctor 
    BinaryTree(int data ){
        this->data = data;
        this->left = NULL ;
        this->right = NULL;
    }


    // Creation of a Member Function for the Creation of the Binary Tree 
   
};

 BinaryTree* createSampleTree() {
    BinaryTree* root = new BinaryTree(1);
    root->left = new BinaryTree(2);
    root->right = new BinaryTree(3);
    root->left->left = new BinaryTree(4);
    root->left->right = new BinaryTree(5);
    root->right->left = new BinaryTree(6);
    root->right->right = new BinaryTree(7);
    return root;
}

void InorderTraversal(BinaryTree* root){
    // Base Case to check if the root of the Pointer is just null 

    if(root == NULL){
        return ; 
        // This is the Condition in which the root of the elements gets empty 
    }
    // LNR
    //L
    InorderTraversal(root->left);
    cout<<root->data;
    InorderTraversal(root->right);

}
void PreOrderTraversal(BinaryTree* root){
    // Base Case to check if the root of the Pointer is just null 

    if(root == NULL){
        return ; 
        // This is the Condition in which the root of the elements gets empty 
    }
    // LNR
    //L
     cout<<root->data;
    PreOrderTraversal(root->left);
   
    PreOrderTraversal(root->right);

}

int Height(BinaryTree* root){
    // To calculate the heigh  of the Binary tree 
    if(root == NULL){
        return 0 ; 
    }
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    int maxHeight = max(leftHeight, rightHeight) + 1 ;
    

    return maxHeight ; 
}

void HelperLevelOrderTraversal(BinaryTree* root , int i ){
    // This function is basically used for printing the level order traversal of the tree 
    if(root == NULL){
        return ; 
    }
    else if (i == 1 ){
        // This will be used for Printing  the Data of the Tree 
        cout<<root->data;
    }
    else {
        HelperLevelOrderTraversal(root->left , i - 1 );
        HelperLevelOrderTraversal(root->right , i - 1 );
    }
}


void LevelOrderTraversal(BinaryTree* root){
    // Printing in Order Traversal would first require to calculate the height of the tree 
    int h = Height(root);
    // This would calculate the height of the tree 
    for(int i = 1 ;  i <= h ; i++){
        // This is basically a helper function for  better understanding of the code
        HelperLevelOrderTraversal(root , i );
    }
    
}


int main(){

    BinaryTree* root = createSampleTree();
    LevelOrderTraversal(root);
    return 0 ;
}