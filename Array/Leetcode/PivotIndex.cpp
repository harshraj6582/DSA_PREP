// class Solution {
// public:
//     int pivotIndex(vector<int>& arr) {
//         int size = arr.size();
//         int sum = 0 ;
//         int left_sum = 0 ;
//         int right_sum = 0 ;
        
//         // Now Calculating the sum of the entire Array 
//         for(int i = 0 ; i < size ; i++){
//             sum += arr[i];
//         }
        
//         for(int i = 0 ; i < size ; i++){
//             right_sum = sum - left_sum - arr[i];
            
//             if(left_sum == right_sum){
//                 return i ;
//             }
            
//             left_sum += arr[i];
//         }
        
//         return -1 ; 
//     }
// };