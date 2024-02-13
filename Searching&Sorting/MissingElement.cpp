// #include<iostream>
// using namespace std ;

// int missingElement(int arr[] , int size){
//     int start = 0 ;
//     int end  = size -1 ;
//     int mid = (start+end)/2;
//     int ans = -1 ;
//     while(start<=end){
//         if(arr[mid] - mid == 1){
//             start = mid + 1 ;
//         }
//         else{
//             ans = mid ;
//             end = mid -1 ;

//         }

//         mid = (start+end)/2;


//     }
//     return ans ; 
// }

// int main(){
//     int arr[] = {1,2,3,4,5,7,8,9};
//     // Missing Element is 6 
//     int size = sizeof(arr)/sizeof(int);
//     int index = missingElement(arr , size );
//     cout<<"The Missing Element is "<<index+1;

//     return 0 ;
//     }


//     ///////////////////////////////////////////////////////////////////////////////////
//     // In this question we are using the Binary Search for Implementation because of the time complexity should be less than O(N)
//     // We used Binary Search for the following reasosn 
//     // Sorted Array 
//     // Time Complexity 