// To Implement Using the Counting Approach 


// Using two Pointer Approach 
// // class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int arr_size = nums.size();
//         int left = 0 ;
//         int right = arr_size - 1 ;
//         int index = 0 ;

//         // We are Using left pointer to store 0 
//         // Right Pointer to store 2
//         // After arranging  0  & 2  One(1) will automatically will be arranged 
//         while(index<=right){
//             if(nums[index] == 0 ){
//                 swap(nums[index] , nums[left]);
//                 index ++;
//                 left ++;
//             }
//             else if(nums[index] == 2 ){
//                 swap(nums[index] , nums[right]);
                
//                 right -- ; 
//             }
//             else{
//                 index ++ ;
//             }

//         }
        
        
//     }
// };