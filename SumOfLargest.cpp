// pair<int,int> height(Node* root)
//     {
//     if(!root)
//     {
//         return {0,0};
//     }
//     auto lh = height(root->left);
//     auto rh = height(root->right);

//     int sum = root->data ;

//     if(lh.first == rh.first)
//     {
//         // This means that the Height of the Binary Tree is 
//         // jUst the same So consider the larger Value in the Tree 
//         sum += lh.second > rh.second ? lh.second : rh.second;
//     }
//     else if (lh.first > rh.first)
//     {
//         sum += lh.second;
//     }
//     else
//     {
//         sum += rh.second;
//     }

//     return {max(lh.first , rh.first) + 1 , sum };
// }
    
//     int sumOfLongRootToLeafPath(Node *root)
//     {
//         auto ans = height(root);
//         return ans.second ;
//     }