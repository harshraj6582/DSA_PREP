#include<iostream>
#include<queue>
#include<unordered_map>
#include <map>
using namespace std ; 

class Node{
    public:
    int data ; 
    Node* left ; 
    Node* right ;

    Node(int val){
        this->data = val ;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree() {
    cout<<"Enter the Value for the Node: ";
    int value ; 
    cin >> value ;

    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1 

    if(value == -1){
        return NULL;
    }
    // Creation of the Node 
    Node* root= new Node(value);
    cout<<"Entering the value in the Left Portion "<<value<<endl;
    root->left = createTree();
    cout<<"Enter the Valeu of the Right Portion of the Tree"<<value<<endl;
    root->right = createTree();

    return root ; 

}

void preOrder(Node* root){
    if(root == NULL){
        return ; 
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){

    // Conditon for Checking the Null Value 
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        // We are just checking the Null Values
        return ; 
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q ;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        // Take a Temp Variable 
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            // This means a Particular Level Oder Traversal has been completed 
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left != NULL){
                // There are Null Elements Present 
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
}

void printLeftView(Node* root , int level , vector<int>& leftView){
    if(root == NULL){
        return ; 
        // This is just the empty case 
    }

    if(level == leftView.size()){
        // Iska matlab we are at the left View of the Node
        leftView.push_back(root->data);
    }
    printLeftView(root->left , level+1  , leftView);
    printLeftView(root->right ,level+1 , leftView);
}

void printRightView(Node* root , int level , vector<int>& RightView){
    if(root == NULL){
        return ; 
        // This is just the empty case 
    }

    if(level == RightView.size()){
        // Iska matlab we are at the left View of the Node
        RightView.push_back(root->data);
    }
    printRightView(root->right ,level+1 , RightView);
    printRightView(root->left , level+1  , RightView);
   
}

// Printing the Top View Of the Binary Tree 
void printTopView(Node* root){
    // Make a map for the Mapping for the Int Pointer for the Int Pointer 
    map<int,int> hdtoNodemap;
    queue<pair<Node* , int>> q ;
    q.push(make_pair(root,0));

    while(!q.empty()){
        // Make a Pair for the 
        pair<Node* , int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        // If there is no Entry for the particualar Horizontal Distance then 
        // Create a new entry 
        if(hdtoNodemap.find(hd) == hdtoNodemap.end()){
            // This means that threr is not entry for the particular Node 
            hdtoNodemap[hd] = frontNode->data ; 
        }

        // TO add the Child also 
        if(frontNode->left != NULL){
            q.push(make_pair(frontNode->left , hd - 1 ));

        }
        if(frontNode->right != NULL){
            q.push(make_pair(frontNode->right , hd + 1 ));
        }
        cout<<"printing the Top View ";
        for(auto it : hdtoNodemap){
            cout<<it.second<<" ";
        }
    }
}
int main(){
    Node* root = createTree();
    levelOrderTraversal(root);
    cout<<"Printing the Left View of the Binary Tree";
    vector<int> leftView;
    vector<int> RightView;

    // printLeftView(root , 0 , leftView);
    // for(int i = 0 ; i < leftView.size() ; i++){
    //     cout<<leftView[i]<<" ";
    // }



    // cout<<"Printing the Right Order of the Tree";

    //  printRightView(root , 0 , RightView);
    // for(int i = 0 ; i < RightView.size() ; i++){
    //     cout<<RightView[i]<<" ";
    // }
    printTopView(root);
   
   

    return 0 ;
}