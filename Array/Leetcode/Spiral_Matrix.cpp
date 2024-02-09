// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans; // Initialize the answer vector
        
//         // Check if the matrix is empty
//         if (matrix.empty()) 
//             return ans;

//         int row = matrix.size();
//         int col = matrix[0].size();
//         int elements = row * col;

//         int count = 0;
//         int starting_row = 0;
//         int starting_col = 0;
//         int ending_row = row - 1;
//         int ending_col = col - 1;

//         while (count < elements) {
//             // Traverse from left to right
//             for (int i = starting_col; i <= ending_col && count < elements; i++) {
//                 ans.push_back(matrix[starting_row][i]);
//                 count++;
//             }
//             starting_row++;

//             // Traverse from top to bottom
//             for (int i = starting_row; i <= ending_row && count < elements; i++) {
//                 ans.push_back(matrix[i][ending_col]);
//                 count++;
//             }
//             ending_col--;

//             // Traverse from right to left
//             for (int i = ending_col; i >= starting_col && count < elements; i--) {
//                 ans.push_back(matrix[ending_row][i]);
//                 count++;
//             }
//             ending_row--;

//             // Traverse from bottom to top
//             for (int i = ending_row; i >= starting_row && count < elements; i--) {
//                 ans.push_back(matrix[i][starting_col]);
//                 count++;
//             }
//             starting_col++;
//         }

//         return ans;
//     }
// };