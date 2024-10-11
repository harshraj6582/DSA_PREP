class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        // There is single element that appears only once we have to find out that element 
        // Since the Array is being sorted we have to use the concept of Binary Search

        int n = arr.size(); // Size of the Array 

        // Edge Cases :
        if (n == 1 ) return arr[0];
        if (arr[0] != arr[1] ) return arr[0];
        if (arr[n-1] != arr[n-2]) return arr[n-1];

        int low = 1  , high = n - 2 ;
        while(low <= high){
            int mid = (low + high) / 2 ;

            // Check for the Condition in which arr[mid] is the single element
            if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid - 1]){
                return arr[mid];
            }


            // Now we have to check whether we are on the Left Part of the Answer or the Right part 
            // of the answer 
            if((mid % 2 == 1  && arr[mid] == arr[mid - 1 ]) || (mid % 2 == 0 && arr[mid] == arr[mid +1])){
                // we are on the Left edge of the answer so we have to eliminate then Left part 
            low = mid + 1 ;
            }

            else{
                // We are on the right edge of the answer so we need to eliminate the right 
                // one first 
                high = mid - 1 ;
            }
        }
        return -1 ;

        



    }
};