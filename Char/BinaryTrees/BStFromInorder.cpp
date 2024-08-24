#incldue<iostream>
#include<queue>
using namespace std ; 

class Node {
    public : 
    int data ; 
    Node* left ; 
    Node* right ; 

    Node(int value) 
    {
        this->data = value ; 
        this->left = NULL ; 
        this->right = NULL ; 
    }
};

Node* insertIntoBST(Node* root , int data )
{
    if(root == NULL )
    {
        root = new Node(data);
        return root ; 
    }

    // IF this is not the first Node 
    if(data > root->data)
    {
        root->right  = insertIntoBST(root->right , data);
    }
    else {
        root->left  = insertIntoBST(root->left , data);
    }

    return root ; 
}

void createBST(Node* &root)
{
    cout<<"Enter the Data"<<endl;
    int data ; 
    cin >> data ; 

    while(data != -1)
    {
        root =  insertIntoBST(root , data);
        cout<<"Enter the Data"<<endl;
        cin >> data ; 
    }
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q ; 
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else {
            cout<< temp->data << " ";
            if(temp->left != NULL)
            {
                q.push(temp->left);
            }
            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void preorder(Node* root)
{
    // NLR 
    if(root == NULL)
    {
        return ; 
    }
    cout<<root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root)
{
    // LNR 
    if(root == NULL)
    {
        return ; 
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root)
{
    // LRN Concept 
    if(root == NULL)
    {
        return ; 
    }
    postorder(root->left);
    postorder(root>right);
    cout<<root->data << " ";
}

Node* minValue(Node* root)
{
    if(root == NULL){
        cout<<"NO MIN Value Found"<<endl;
        return NULL ; 
    }
    Node* temp = root ; 

    while(temp->left != NULL)
    {
        temp = temp->left ; 
    }

    return temp ; 
}

Node* maxValue(Node* root)
{
    if(root == NULL)
    {
        return NULL ; 
    }
    // If the Tree has the count of nodes greter than  0 
    Node* temp = root; 
    while(temp->right != NULL)
    {
        temp = temp->right ; 
    }
    return temp ; 
}

bool SearchInBST(Node* root , int target)
{
    // base Condition 
    if(root == NULL )
    {
        return false; 
    }

    // 1 case apne s solve krna h 
    if(root->data == target)
    {
        return true ; 
    }

    bool leftAns = false ; 
    bool rightAns = false ; 
    if(target > root->data)
    {
        rightAns = SearchInBST(root->right , target)
    }
    else{
        leftAns = SearchInBST(root->left , target);
    }

    // Then Return the ANs of any of the following 
    return leftAns || rightAns ;
}

Node* deleteFromBST(Node* root , int target)
{
    // Search for the Target 
    // Then Delete the target 

    if(root == NULL)
    {
        return NULL ; 
    }

    if(rot->data == target)
    {
        // There are 4 cases which are target can be found

        if(root->left == NULL && root->right == NULL)
        {
            delete root ; 
            return NULL ; 
        }

        else if(root->left != NULL && root->right == NULL)
        {
            Node* childSubtree = root->left ; 
            delete root ; 
            return childSubtree; 
        }
        else if(root->left == NULL && root->right != NULL)
        {
            Node* childSubtree = root->right ; 
            delete root ; 
            return childSubtree ; 
        }
        else {
            // This is the case in which we have two Node in which both of them are Not null 
            Node* maxi = maxValue(root->left);

            // Replacement of the Node 
            root->data = maxi->data ; 

            // Delete the Actual Ndode from the MAxi value 
            root->left = deleteFromBST(root->left , maxi->data);
            return root; 
        }
        else if(root->data > target) {
		//left me chalo
		root->left =  deleteFromBST(root->left,  target);
	}
	else {
		//right me jao
		root->right =  deleteFromBST(root->right, target);
	}
	
	return root;

    }
}

Node* bstFromInorder(int inorder[] , int s  , int e )
    {
        // Base Case 
        if(s > e ){
            return NULL ; 
        }
        // 1 Case Solve krna h 
        int mid = (s+e)/2;
        int element = inorder[mid];
        Node* root = new Node(element);

        // Baaki Recursion krega 
        root->left = bstFromInorder(inorder , s , mid - 1 );
        root->right = bstFromInorder(inorder , mid+1 , e);

        return root ; 

        // This is the case in which the recursion just checks for the 

    }

Node* bstInorder(int order[] , int s , int e)
    {
        if(s > e ){
            return NULL ; 
        }
        // We just need to solve just one equation 
        int mid = (s+e)/2;
        int element = inorder[mid];
        Node* root = new Node(element);

        // Rest the question will be sovled by the recurive call 
        root->left = bstFromInorder(inorder , s , mid-1);
        root->right = bstFromInorder(inorder , mid + 1 , e );

        return root ; 

        // This is the case in which the recursion will just solve for one of the case 
        // and rest will solve using the concept of recursion 
    }

int main() {
    int inorder[] = {10,20,30,40,50,60};
    int size = 7 ; 
    int start = 0 ; 
    int end = size - 1 ;
    Node* root = bstFromInorder(inorder , start , end);

    levelOrderTraversal(root);
    return 0 ;

    // As the Inorder Traversal of Binary Tree is just the Sorted Array 
    // So that we can just make the left and right subtree 
}