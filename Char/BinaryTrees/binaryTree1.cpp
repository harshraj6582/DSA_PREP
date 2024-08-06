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
        cout<<"Enter the Value of the Element";
        cin >> data ; 
        if(data == -1){
            return NULL;
        }
        BinaryTree* root = new BinaryTree(data);

        root->left = creation();
        root->right = creation();

        // After the Element we will just complete the process and just return the tree\

       
        return root ;
    }


int main(){

    BinaryTree* root = creation();
    return 0 ;
}