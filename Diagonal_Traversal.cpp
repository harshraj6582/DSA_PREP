#include<iostream>
#include<map>
#include<vector>

using namespace std ;

class BinaryTree {
    public : 
    int data ; 
    BinaryTree* left;
    BinaryTree* right;

    BinaryTree( int data)
    {
    this->data = data ;
    this->left = NULL;
    this->right = NULL ;
    }
};

BinaryTree* CreateBinaryTree() {
    // This function is used for the creation of a Binary Tree
    int data;
    cout << "Enter the Value of the Node (-1 to stop): " << endl;  // Added endl
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    // Memory allocation for the new node
    BinaryTree* root = new BinaryTree(data);
    cout << "Enter the Value for the Left Node of " << data << ": " << endl;  // Added endl
    root->left = CreateBinaryTree();
    cout << "Enter the Value for the Right Node of " << data << ": " << endl;  // Added endl
    root->right = CreateBinaryTree();

    return root;
}
void PreOrderTraversal(BinaryTree* root)
{
    // This is basically used for Traversing the Whole Binary Tree 
    if(root == NULL){
        return ;
        // As this is the case for the Empty Binary Tree 
    }
    // NLR 
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);

}

void DiagonalTraversal(BinaryTree* root , int  d , map<int, vector<int>> & mp)
{
    // This is basically used for the Transmission of Node from Left the Value is being Incremented 
    // And when we Traverse the Root Roght we need to have the same value 

    if(root == NULL){
        return ; 
    }
    // For each of the Value of d store the corresponding elements 
    mp[d].push_back(root->data);

    DiagonalTraversal(root->left , d+1 , mp);
    DiagonalTraversal(root->right , d , mp );

    return ; 


}

void PrintDiagonalTraversal(map<int , vector<int>>& mp){
    // This is used for Traversing the Whole Node as of to print  the 
    // elements 
    for(auto it : mp) {
        for(int x : it.second) {
            cout<< x << " ";
        }
        cout<< endl ; 
    }
}


int main(){
   
    BinaryTree* root = CreateBinaryTree();
    // Now we will be using the concept of the Traversal 
    int d = 0 ; 
    // Creation of a Ordered Map so That it maintains the key value pair of the elememt
    map<int , vector<int> > mp ; 
    DiagonalTraversal(root, d , mp);
    PrintDiagonalTraversal(mp);

    return 0 ;
}