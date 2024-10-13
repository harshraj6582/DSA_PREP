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


//     int lowerBound(vector<int> arr, int n, int x) {
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] >= x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }
  
  
//     int rowWithMax1s(vector<vector<int> > &arr) {
//         int n = arr.size();
//         int m = arr[0].size();
//         int cnt_max = 0 ;
//         int index = -1 ; 
        
//         // Get the Number of 1's :
//         for(int i = 0 ; i < n ; i++){
//             int cnt_ones = m - lowerBound(arr[i] , m , 1 );
//             if(cnt_ones > cnt_max){
//                 cnt_max = cnt_ones ; 
//                 index = i ; 
//             }
//         }
        
//         return index ; 
        
        
//     }