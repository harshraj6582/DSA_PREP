// #include <vector>

// class Solution {
// public:
//     int peakIndexInMountainArray(std::vector<int>& arr) {
//         int start = 0;
//         int size = arr.size();
//         int end = size - 1;
//         int mid;
//         while (start <= end) {
//             mid = start + (end - start) / 2;
//             if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
//                 return mid;
//             } else if (arr[mid] < arr[mid + 1]) {
//                 start = mid ;
//             } else {
//                 end = mid;
//             }
//         }
//         return -1; 
//     }
// };



// Just using the Basic Binary Search opertion for checking the peak Element in the Mountain 
// Key Points to be Considerd are That the Array is Sorted and Can used to find the element 