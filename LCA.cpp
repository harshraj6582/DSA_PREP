//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(){
        data = 0;
        left = right = NULL;
    }
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// } Driver Code Ends
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    
    bool PreOrderTraversal(Node* root , int n , vector<Node*>& path)
    {
        // Base Case 
        if(root == nullptr)
        {
            return false ; 
        }
        // Add the Current Node to the Path 
        path.push_back(root);
        if (root->data == n) {
        return true; // Found the target node
    }
        
        // Check left and right Subtress
        if(PreOrderTraversal(root->left , n , path) || PreOrderTraversal(root->right , n , path)){
            return true ;
        }
        
        // If Not Found , Remove the path 
        path.pop_back();
        return false ; 
   
    }
    
    
    Node* lca(Node* root ,int n1 ,int n2 )
    {
     vector<Node*> path1 , path2 ;
     
     // Find the Paths to n1 as well as n2 
     if(!PreOrderTraversal(root , n1 , path1) || !PreOrderTraversal(root , n2 , path2))
     {
         return nullptr ;
     }
     Node* lca = nullptr ; 
     int minSize = min(path1.size() , path2.size());
     
      for (int i = 0; i < minSize; i++) {
            if (path1[i]->data == path2[i]->data) 
            {
                lca = path1[i]; 
            }
            else 
            {
                break; 
            }
        }
        return lca; 
      
      
      
    }
};

//{ Driver Code Starts.

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// Function for Inorder Traversal
void printInorder(Node* root)
{
    if(!root)
        return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d ",&a,&b);
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        Solution ob;
        cout<<ob.lca(root,a,b)->data<<endl;
    }
    return 0;
}

// } Driver Code Ends