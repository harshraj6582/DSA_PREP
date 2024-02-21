
// #include<iostream>
// using namespace std ; 


// int firstOccurence(int arr[] , int size  , int target){
//     int start = 0;
//     int end = size -1  ;
//     int mid = (start + end) / 2;
//     int ans  = -1  ; 
//     while(start <= end ){
//         if(target == arr[mid] ){
//             ans = mid ;
//             start  = mid +1 ;

//         }
//         else if(target > arr[mid]){
//             start = mid + 1 ;
//         }
//         else {
//             end = mid -1 ; 
//         }
//        mid = (start + end) / 2;
        
//     }
//     return ans ; 
// }

// int main(){

//     int arr[] = {10,20,30,30,30,40,50,60};
//     int size = sizeof(arr)/sizeof(int);
//     int target = 30 ;
//     int index = firstOccurence(arr , size  ,target);
//     if(index == -1){
//         cout<<"Element Not Foudn ";
//     }
//     else{
//         cout<<"Element Found at Index "<<index;
//     }
//     return 0 ;
// }