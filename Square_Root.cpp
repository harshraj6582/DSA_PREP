// class Solution {
//   public:
//     long long int floorSqrt(long long int n) {
    
    
//     int low = 1 , high = n ; 
//     // Binary Search on the answers :
//     while(low <= high){
//         long long mid = (low + high) / 2 ;
//         long long val = mid * mid ; 
//         if(val <= (long long )(n)){
//             // Eliminate the Left Half ;
//             low = mid + 1 ;
//         }
//         else{
//             // Eliminate the Right Half
//             high = mid  - 1 ; 
//         }
//     }
    
//     return high ; 
//     }
// };