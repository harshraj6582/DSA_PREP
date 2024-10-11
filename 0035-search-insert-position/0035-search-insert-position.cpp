class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
        int n = arr.size(); // Size of the Array 
        int low = 0 , high = n - 1 ;
        int ans = n ; 

        while(low <= high){
            int mid = (low + high) / 2 ;
            // This Maybe the answer
            if(arr[mid] >= x){
                ans = mid ; 
                // Check for the smaller index in the 
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
                // Look at the right 
            }
        }
        return ans ; 
        
    }
};