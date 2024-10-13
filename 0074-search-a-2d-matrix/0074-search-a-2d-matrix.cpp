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
    
    ///////////////////////////////CONVERTING 2D Matrix to 1 D /////////////////////////////////
    
    
    
    //  bool searchMatrix(vector<vector<int>>& matrix, int target){
         
    //      int start = 0 ;
    //      // Total Number of Elemets in a 2D vector 
    //      int rows = matrix.size() ;
    //      // Total Number of Rows
    //      int col = matrix[0].size();
    //      // This will print the number of Coloums 
    //      int total = rows * col;
         
    //      int end = total - 1  ; 
    //      int mid = start + (end - start)/2;
         
    //      while(start<=end){
    //          int matrix_row = mid / col ;
    //          int matrix_col = mid  % col ;
             
    //          if(matrix[matrix_row][matrix_col]  == target){
    //              return true ;
    //          }
    //          else if  (matrix[matrix_row][matrix_col]  < target){
    //              start = mid + 1 ;
    //          }
    //          else {
    //              end = mid - 1;
    //          }
    //          mid = start + (end - start)/2;
    //      }
    //       return false ;
    //      }
   
   
     
};
