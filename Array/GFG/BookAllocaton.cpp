// //{ Driver Code Starts
// // Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// //User function template in C++

// class Solution 
// {
//     public:
//     //Function to find minimum number of pages.
    
//     bool Possible(int A[] , int N , int M , int mid ){
//         int pageSum = 0 ;
//         int c = 1; 
//         for(int i = 0 ; i < N ; i++){
//             if(A[i]>mid){
//                 return false;
//             }
//             if(pageSum + A[i] > mid){
//                 c++;
//                 pageSum = A[i];
//                 if(c>M){
//                     return false ; 
//                 }
//             }
//             else{
//                  pageSum += A[i];
//             }
//         }
//         return true ; 
//     }
//     int findPages(int A[], int N, int M) 
//     {
//         // Edge Case when the Number of Students(M) > Number of Books (N) return -1 
//         if(M>N){
//             return -1 ;
//         }
        
//         int start = 0 ;
//         int sum = 0 ;
//         int ans = - 1 ;
//         for(int i = 0 ; i<N ; i++){
//             sum+= A[i];
//             // This is used to store the sum of all the pages 
//         }
//         int end = sum ;
        
//         while(start<=end){
//             int mid = (start + end) / 2;
//             if(Possible(A,N,M,mid)){
//                 ans = mid ;
//                 end = mid -1 ;
//             }
//             else{
//                 start = mid + 1 ; 
//             }
//         }
//         return ans ; 
        
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int A[n];
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//         }
//         int m;
//         cin>>m;
//         Solution ob;
//         cout << ob.findPages(A, n, m) << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends