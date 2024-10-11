class Solution {
public:
    int search(vector<int>& arr, int k) {
      int low  = 0 , high = arr.size() - 1 ;
      while(low <= high){
        int mid = (low + high)/2;

        // If the Mid Points to the target
        if(arr[mid] == k ) return mid ;

        // If Left Points to the Target 
        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k <= arr[mid]){
                high = mid -1 ;
            }
            else{
                // Element doesnot exists :
                low = mid + 1 ;

            }
        }
        else{
            // If Right part is sorted 
            if(arr[mid] <= k && k <= arr[high]){
                // This means array Exists 
                low = mid + 1 ;
            }
            else{
                high = mid -1 ; 
            }
        }
      }

      return -1 ;

    }
};