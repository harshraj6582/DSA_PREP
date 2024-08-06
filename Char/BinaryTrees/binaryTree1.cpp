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

 BinaryTree* creation(){
        // This is called for the creation of the Binary Tree 
        int data ; 
        cout<<"Enter the Value of the Element :::";
        cin >> data ; 
        if(data == -1){
            return NULL;
        }
        BinaryTree* root = new BinaryTree(data);
        cout<<"Entering the Value of the Left Subtree of "<<data<<endl;

        root->left = creation();
         cout << "Entering right subtree of " << data << endl;
        root->right = creation();

        // After the Element we will just complete the process and just return the tree\

       
        return root ;
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
    InorderTraversal(root->left);
   
    InorderTraversal(root->right);

}


int main(){

    BinaryTree* root = creation();
    InorderTraversal(root);
    return 0 ;
}