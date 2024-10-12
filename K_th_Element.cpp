// int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
//     vector<int> arr3;

//     int m = arr1.size();  
//     int n = arr2.size();  

//     // Merge step
//     int i = 0, j = 0;
//     while (i < m && j < n) {
//         if (arr1[i] < arr2[j]) {
//             arr3.push_back(arr1[i++]);
//         } else {
//             arr3.push_back(arr2[j++]);
//         }
//     }

    
//     while (i < m) {
//         arr3.push_back(arr1[i++]);
//     }

    
//     while (j < n) {
//         arr3.push_back(arr2[j++]);
//     }

    
//     return arr3[k - 1];
// }