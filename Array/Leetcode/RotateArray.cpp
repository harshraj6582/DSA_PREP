// #include <vector>

// class Solution {
// public:
//     void rotate(std::vector<int>& nums, int k) {
//         int arr_size = nums.size();
//         std::vector<int> ans(arr_size); // Declare a new vector to store the rotated elements
//         for (int i = 0; i < arr_size; i++) {
//             int new_i = (i + k) % arr_size;
//             ans[new_i] = nums[i];
//         }

//         nums = ans; // Assign the rotated elements back to the original vector
//     }
// };