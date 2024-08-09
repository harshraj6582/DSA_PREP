// class Solution {
//   public:
//     // Function to construct binary tree from parent array.
//     Node* createTree(vector<int> parent) {
//     int n = parent.size();
//     Node* nodes[n]; // Array to hold nodes
//     Node* root = NULL; // Initialize root

//     // Create all nodes first
//     for (int i = 0; i < n; i++) {
//         nodes[i] = new Node(i);
//     }

//     // Link nodes based on parent array
//     for (int i = 0; i < n; i++) {
//         if (parent[i] == -1) {
//             // If this node is the root
//             root = nodes[i];
//         } else {
//             // Link current node to its parent
//             if (nodes[parent[i]]->left == NULL) {
//                 nodes[parent[i]]->left = nodes[i]; // Assign as left child
//             } else {
//                 nodes[parent[i]]->right = nodes[i]; // Assign as right child
//             }
//         }
//     }
    
//     return root; // Return the constructed tree's root
// }