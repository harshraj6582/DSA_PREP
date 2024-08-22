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

void LevelOrder(Node* root){
    // Level ORder Traversal of Binary Search Tree Using the 
    // Queue 
    queue<Node*> q ; 
    q.push(root);
    q.push(NULL);

    // As Queue Contains some sort of data so there are elements 
    while(!q.empty()){
        // This Loop will Return until there are elements in the Queue 
        Node* temp = q.front() ;
        q.pop() ; 
        // So basically Each element will be insert 
        if(temp == NULL){
            cout<<endl;
            // This is the condtion for NULL so we need to again check if there are 
            // elements in the queue so We can insert the NULL parameter 
            if(q.empty()){
                break;
            }
            else{
                q.push(NULL);
                
            }
        }
        else{
            // This is the Condtion in which there are elements of the Node 
            // SO we need to print out the elements 
            cout<<temp->data<<" ";
            // Now we have to insert the the Left and Right Child of the Elements 
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

Node* MinValue(Node* root)
{
    if(root == NULL){
        return NULL ; 
    }

    // This is the Base case for checking if the node is Empty or not 
    if(root -> left == NULL){
        return root ; 
    }
    return MinValue(root->left);
}

Node* MaxValue(Node* root){
    // Check for the Condition if the Root is being NULL 
    if(root == NULL){
        return NULL ; 
    }
    Node* temp = root ; 
    while(temp->right != NULL){
        temp = temp->right ;
    }
    return temp ; 
}

Node* MaxValue2(Node* root){
    // Check for the Base Case 
    if(root == NULL){
        return NULL ; 
        // This is the case in which the Root is being the NULL one 

    }
    if(root -> right == NULL){
        return root ;
    }
    return MaxValue2(root->right);
}

bool SearchBST(Node* root  , int target){
    // This is basically used to check the COnsition of the Empty Ome 
    if(root == NULL){
        return false ; 
    }
    // Now check for the Condition if the Root one is the taret
    if(root->data == target){
        return true ;
    }
    bool la = false ; 
    bool ra = false ; 

    if(target > root->data){
        ra = SearchBST(root->right , target);
    }
    else{
        la = SearchBST(root->left , target);
    }

    // IF any of the Answer is True then Return it 
    return la|| ra ; 
}

int main(){

    // Creation of the Node as their is case in which the Data has to Inserted 
    Node* root = NULL ; 
    insertBST(root);
    // Basically this is used for the Insertion in the BST 
    PreOrder(root);
    LevelOrder(root);

    // Now Considering the Minimum value of the Tree which would be the left most oart of the Tree 
   Node* min =  MinValue(root);
   cout<<min->data; 


    return 0 ;
}