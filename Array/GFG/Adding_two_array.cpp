// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends


// class Solution{
//     public:
//     string calc_Sum(int *a,int n,int *b,int m){
    
//     int i = n-1 ;
//     int j = m-1 ;
//     int sum = 0 ;
//     int carry = 0 ;
//     int digit = 0 ;
//     // This is used for checking out the last element for the array 
//     string addition ;
//     while(i >= 0  && j >= 0 ){
//         sum = a[i] + b[j] + carry ;
//         // This will generate the sum of the individual array 
//         carry = sum /  10 ;
//         digit = sum % 10 ;
//         addition.push_back(digit+'0');
//         // Type Casting the String into Numbers 
//         i-- ;
//         j-- ; 
        
//     }
    
//     while(i >=0){
//         sum = a[i] + 0 + carry ;
//         // Adding 0 because array b has already became null 
//         carry = sum /  10 ;
//         digit = sum % 10 ;
//         addition.push_back(digit+'0');
//         i--;
//     }
    
//      while(j >=0){
//         sum = b[j] + 0 + carry ;
//         // Adding 0 because array b has already became null 
//         carry = sum /  10 ;
//         digit = sum % 10 ;
//         addition.push_back(digit+'0');
//         j--;
//     }
    
//     // Checking if Carry is Null or Not if Null Do nothing Else push directly into the string 
//     if(carry){
        
//         addition.push_back(carry + '0');
//         // This is for checking the last bit of carry is present or not 
//     }
    
    
//     while(addition[addition.size() - 1 ] == '0' ){
//         addition.pop_back();
        
//     }
//     reverse(addition.begin() , addition.end());
    
    
//     return addition ; 
    
    
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int a[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>a[i];
// 	    }
// 	    int m;
// 	    cin>>m;
// 	    int b[m];
// 	    for(int i=0;i<m;i++){
// 	        cin>>b[i];
// 	    }
// 	    Solution ob;
// 	    cout << ob.calc_Sum(a,n,b,m) << endl;
// 	}
// 	return 0;
// }
// // } Driver Code Ends