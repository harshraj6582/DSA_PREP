// Return True or False Depending on the case whether
// the sum of any two elements of an array is equal to the 
// Target 







///////////////////////////////////////////////////////
//1ST Approach ------ BRUTE FORCE 
// Traverse the whole array with Two Loops for checking the sum of 
// // Each element

// for(int i = 0 ; i< n ; i++){
//     for(int j = i+1 ; j < n ; j++){
//         if(arr[i] + arr[j] == sum){
//             return true ;
//         }
//     }
// }
//     // If not found Return False 
//     return fasle ; 




/////////////////////////////////////////////////////////////////////////
// Using Two Pointer Approach 


	// bool hasArrayTwoCandidates(int arr[], int n, int x) {
	//     sort(arr , arr+n);
	//     int i =  0 ;
	//     int j = n-1 ; 
	    
	//         while(i < j ){
	//             if(arr[i] + arr[j] == x){
	//                 return true ;
	//             }
	//             else if ( arr[i] + arr[j] > x){
	//                 j--;
	//             }
	//             else{
	//                 i++;
	//             }
	       
	//     }
	//     return false ; 
	// }