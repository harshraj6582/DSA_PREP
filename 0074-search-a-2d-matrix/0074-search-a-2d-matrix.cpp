class Solution {
public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//          int no_vector = matrix.size();
//          int no_of_vecto_of_vector = matrix[0].size();
//         // This wil return the Number of Elements in the Each of the Row of the Vector 
//         for(int i = 0 ; i < no_vector; i++){
//             for(int j = 0 ; j < no_of_vecto_of_vector ; j++){
//                 if(matrix[i][j] == target){
//                     return true ; 
//                 }
//             }
//         }
//         return false ; 
        
//     }
    // Brute Force Approach is used in this solution 
    
    

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int col = matrix[0].size() - 1; 

        while (row < matrix.size() && col >= 0) { 
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] < target) {
                row++;
            } else {
                col--;
            }
        }
        return false;
    }
};
