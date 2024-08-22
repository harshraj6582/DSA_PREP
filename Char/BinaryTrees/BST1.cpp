#include<iostream>
#include<queue>
using namespace std ; 

class Node {
    public : 
    int data ; 
    Node* left ;
    Node* right ;

    Node(int data)
    {
        // AS this is the Pointer so I Would be using the arrow operator 
        // This is basically the Parametrized Constructor 
        this->data = data ;
        this->left = NULL ;
        this->right = NULL ; 
    }
};

Node*  createBST(Node* root , int data)
{ 
    // This is the Case in which the Root is NULL so that There is No Nodes in the Tree 
    if(root == NULL ){
        root = new Node(data);
        return root ; 
        
    }
    // As the BST is being Sorted so we need to check if the case is when the data is being the Smaller or the 
    // Greater one 
    if(root -> data > data){
        // This means the value of the Root is being greater so The Node will be inserted in the Left Side 
        root->left =  createBST(root->left , data);
    }
    else
    {
        // This is the case in which value of the Node is Greater than the Root So it will be inserted in the Right Side 
        root->right = createBST(root->right , data );
    }

    return root ; 

}

void  insertBST(Node* &root )
{
    // This is basically the case in which the following Nodes are being Inserted as this is the  wrapper Function around the Creation 
    int data  ; 
    cout<<"Enter the Data to be inserted in the Tree";
    cin >> data  ; 

    while(data != -1 ){
        // This is the exit case in which there is no need for the creation of the Node 
       root =  createBST( root ,  data);
        cout<<"Enter the Data to be Inserted";
        cin >> data ;
    }

    
    // As This Root is being Changed so that we need for Returning the Node 


}

void PreOrder(Node* root)
{
    // Check for the NULL Case
    
    if(root == NULL ){
        // This is basically the Case in which there is no Nodes in the BST 
        return ;
    } 
    // The Concept is of LNR 
    cout<<root->data<<" ";
    PreOrder(root->left);
    // Now comes the part of the N which is basically the case for the Execution part of the Code 
    

    // Now comes the Right part of the Tree 
    PreOrder(root->right);

}


int main(){

    // Creation of the Node as their is case in which the Data has to Inserted 
    Node* root = NULL ; 
    insertBST(root);
    // Basically this is used for the Insertion in the BST 
    PreOrder(root);


    return 0 ;
}