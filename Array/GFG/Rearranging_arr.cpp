// #include <bits/stdc++.h> 
// #include <vector>
// vector<int> separateNegativeAndPositive(vector<int> &nums){
//     int size = nums.size();
//     int left = 0 ;
//     int right = size -1 ; 
//     while(left <= right ){
//         if(nums[left] > 0 && nums[right]<0){
//             swap(nums[left] , nums[right]);
//             left ++ ;
//             right -- ;
//         }
//         else if (nums[left] < 0 ){
//             left++;
//         }
//         else {
//             right -- ;
//         }
//     }
//     return  nums ; 
// }