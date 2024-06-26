// //{ Driver Code Starts
// // Initial template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function template in C++

// class Solution {
//   public:
//     // Function to return the position of the first repeating element.
//     int firstRepeated(int a[], int size) {
//         // // Brute Force Approach 
//         // for(int i = 0 ; i < size ; i++){
//         //     for(int j = i+1 ; j < size ; j++){
//         //         if(arr[i] == arr[j]){
//         //             return i+1 ;
//         //             // This would have the time complexity of O(N*N)
//         //         }
//         //     }
            
//         // }
//         // return -1 ; 
        
        
        
        
//         // Using The Hashing Technique 
//         unordered_map<int , int> hash ; 
//         for(int i = 0 ; i < size ; i++){
//             hash[a[i]]++;
//             // This would create a Table for each of the elements 
//         }
        
//         for(int i = 0 ; i < size ; i++){
//             if(hash[a[i]] > 1 ){
//                 return i+1 ; 
//             }
//         }
        
        
//         return -1 ; 
//     }
// };

// //{ Driver Code Starts.
// int main() {

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         int arr[n];

//         for (int i = 0; i < n; ++i) cin >> arr[i];
//         Solution ob;
//         cout << ob.firstRepeated(arr, n) << "\n";
//     }

//     return 0;
// }

// // } Driver Code Ends