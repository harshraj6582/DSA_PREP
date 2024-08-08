#include<iostream>
#include<vector>
#include<queue>
using namespace std ; 


class BinaryTree{
    public : 
    BinaryTree* left ;
    BinaryTree* right ; 
    int val ;
    
    // Calling the Constructor 
    BinaryTree(int data ){
        val = data ;
        left = nullptr ; 
        right = nullptr ;
    }
    
};

void BinaryTreeCreation(BinaryTree*& root){
    // We will be using the Concept of Recursion to solve this problem 
    
    
    int data ; 
    cout<<"Enter the Data You want to Insert";
    cin >> data ; 
    if(data == -1){
        return ; 
        // The User will insert -1 in that case only in which the Components that has to be inserted is completed 
    }
    
    root = new BinaryTree(data);
    // Now we will just call the left porttion of the Tree for the Traversal 
    
    // Further Recursive Call
    
    cout<<"Enter the value of the Left Child of "<<data<<" ";
    BinaryTreeCreation(root->left);
    cout<<"Enter the value of the Right Child of "<<data<<" ";
    BinaryTreeCreation(root->right);
    
    
}


void PreOrderTraversal(BinaryTree* root ){
    // Condition to be checked are if the Binary Tree is being empty or not 
    if(root == nullptr){
        return ; 
        // This will just return because there is no sort of elements in the Binary Tree 
    }
    // PreOrder means NLR 
    cout<<root->val;
    
    // Again Calling the Recursive Function for Completion of the Nodes of the Tree 
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}


int main(){
    BinaryTree* root = nullptr  ;
    // Intialized the Value of the root pointer to Null as to ensure that it is passed 
    // Creation of Binary Tree 
    BinaryTreeCreation(root);
    PreOrderTraversal(root);
    
    return 0;
}