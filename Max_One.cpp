// class Solution {
//   public:
//     int rowWithMax1s(vector<vector<int> > &arr) {
//         int row = arr.size();
//         int col = arr[0].size();
//         int max_count = 0 ;
//         int row_index = -1 ; 
        
//         for(int i =  0 ; i < row ; i++){
//             int count = 0 ;
//             for(int j = 0 ; j < col ; j++){
//                 if(arr[i][j] == 1){
//                     count ++ ;
//                 }
//                 if(count > max_count){
//                     max_count = count;
//                     row_index = i;
//                 }
                
                
                
//             }
//         }
//         return row_index ; 
//     }
// };