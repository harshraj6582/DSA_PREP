// Find the Pivot Element 
// This is a sub question of searching in a rotated 
// and Sorted Array 


// Code for Pivot ELement 
// Let the Array be [12,14,16,2,4,6,8,10]
// In This the pivot element is 16 


// int PivotIndex(int arr[] , int n ){
//     int s = 0 ;
//     int e = n.size() - 1 ;
//     int mid = (e+s/2);

//     while(s<=e){
//         if(s==e){
//             // Single Element left in the array 
//             return s ;
//         }
//         if(arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         if(arr[mid-1]>arr[mid]){
//             return mid - 1 ;

//         }
//         else(arr[s] > arr[mid]){
//             e = mid -1 ; 
//             // If the Element is present in the Line B
//             // e should come to the ending of line A 

//         }
//         else{
//             s = mid + 1 ; 
//             // If the Element is present in the Line A 
//             // s should be present in the Starting of the mid +1 
//         }
        
//     }
// }