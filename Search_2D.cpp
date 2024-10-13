// // // Binary Search Approach for Searching in a 2 D Matrix 
// // bool searchMatrix(vector<vector<int>> & matrix , int target){
// //     int row = 0;
// //     int col = matrix[0].size() - 1 ; 

// //     while(row < matrix.size() && col >= 0){
// //         if(matrix[row][col] == target){
// //             return true ; 
// //         }
// //         else (matrix[row][col] < target){
// //             row++;
// //         }
// //         else{
// //             col -- ; 
// //         }
// //     }
// //     return false ; 
// // }

// bool searchMatrix(vector<vector<int>> &matrix , int target){

//     int start = 0;
//     int rows = matrix.size();
//     int col = matrix[0].size();

//     int total = rows * col ; 

//     int end = total - 1 ;
//     int mid = start + (end - start) / 2 ;

//           while(start<=end){
//              int matrix_row = mid / col ;
//              int matrix_col = mid  % col ;
             
//              if(matrix[matrix_row][matrix_col]  == target){
//                  return true ;
//              }
//              else if  (matrix[matrix_row][matrix_col]  < target){
//                  start = mid + 1 ;
//              }
//              else {
//                  end = mid - 1;
//              }
//              mid = start + (end - start)/2;
//          }
//           return false ;
// }