// class Solution {
//   public:
//     vector<int> getFloorAndCeil(int x, vector<int> &arr) {
//     int floor = -1 ;
//     int ceil = -1 ;
//     for(int i = 0 ; i < arr.size() ; i++){
//         if(arr[i] <= x ){
//             floor = max(floor , arr[i]);
//         }
//         if(arr[i] >= x){
//             ceil = (ceil == -1) ? arr[i] : min(ceil , arr[i]);
//         }
//     }
    
//     return {floor , ceil} ; 
//     }