class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0 , high = arr.size() - 1 ;
        int ans = INT_MAX ;
        while(low <= high){
            int mid = (low + high) / 2 ;
            // Search Space is already Sorted 
            // Then the arr[low] will always be
            // the minimum in that Search Space 

            if(arr[low] <= arr[high]){
                ans = min(ans , arr[low]);
                break ; 
            }

            // If Left Portion is sorted 
            if(arr[low] <= arr[mid]){
                // Keep the Minimum Value Possible 
                ans = min(ans , arr[low]);

                // Eliminate the Left half 
                low = mid + 1 ;
            }
            else{
                // If Right part is sorted 
                // Keep the Minimum Value with itself 
                ans = min(ans , arr[mid]);

                // Eliminate the Right Half 
                high = mid -1 ; 
            }

        }
        return ans ; 
        
    }
};