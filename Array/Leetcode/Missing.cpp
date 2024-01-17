// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int nums_size = nums.size();
//         int sum = 0 ;
//         int sum_num = 0 ;
//         for(int i = 0 ; i < nums_size ; i++){
//             sum += nums[i];
//         }

//         for(int i = 0 ; i <= nums_size ; i++){
    // This is i <= num_size because in this counting all the numbers 
    // are taken into the consideration 
//             sum_num  += i ;
//         }
//         int num = sum_num - sum ;


//         return num ;  
        
//     }
// };