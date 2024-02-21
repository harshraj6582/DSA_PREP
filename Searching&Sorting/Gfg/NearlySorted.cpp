// int nearlySorted(int arr[], int size, int target) {
//     int start = 0;
//     int end = size - 1;
    
//     while (start <= end) {
//         int mid = start + (end - start) / 2;
        
//         if (arr[mid] == target) {
//             return mid;
//         } 
//         else if (mid - 1 >= start && arr[mid - 1] == target) {
//             return mid - 1;
//         } 
//         else if (mid + 1 <= end && arr[mid + 1] == target) {
//             return mid + 1;
//         } 
//         else if (arr[mid] > target) {
//             end = mid - 2; 
//         } 
//         else {
//             start = mid + 2; 
//         }
//     }

//     return -1;
// }
