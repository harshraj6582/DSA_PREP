// #include<iostream>
// using namespace std ;

// // Implementation of Binary Search 

// bool binarySearch(int arr[] , int size , int target ){
//     int start = 0 ;
//     int end = size -   1 ;
//     int mid = (start + end) / 2 ;

//     while(start<=end){
//         if(target == arr[mid]){
//             return 1 ;
//         }
//         else if (target > arr[mid]){
//             start = mid + 1 ;
//         }
//         else{
//             end = mid - 1 ;
//         }
//         mid = (start+end )/2;
//     }
//     return 0  ;
// }

// int main(){

//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int target = 9 ;
//     int size = sizeof(arr)/sizeof(int);

//     bool result = binarySearch(arr, size , target );

//     if(result == 0){
//         cout<<"Element Not Found ";
//     }
//     else {
//         cout<<"Element Found ";
//     }

//     // Time Complexity of the following code is 0(logN)


//     return 0 ;
// }