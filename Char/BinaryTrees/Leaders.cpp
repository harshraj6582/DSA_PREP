// class Solution {
//   public:
//     vector<int> leaders(int n, int arr[]) {
//         vector<int> ans;
        
//         // The last element is always a leader
//         ans.push_back(arr[n - 1]);
//         int temp = arr[n - 1];
        
//         // Traverse the array from right to left
//         for (int i = n - 2; i >= 0; i--) {
//             if (arr[i] >= temp) {
//                 ans.push_back(arr[i]);
//                 temp = arr[i];
//             }
//         }
        
//         // Reverse the result to maintain the order from left to right
//         reverse(ans.begin(), ans.end());
        
//         return ans;
//     }
// };