class Solution {
public:
    bool search(vector<int>& nums, int target) {

    // The Logic remains the Same as of the Sorted Rotated Array 
    int low = 0 ; int high = nums.size() -1 ;
    int mid = low + (high - low)/2 ;
    while(low <= high){

         if(nums[mid] == target){
            return true ; 
        }
        
         if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }
        // Check for the Condition if the Mid element is equal to the Target 
       
        // Check of the Left Part of the Array is being Sorted 
        else if(nums[low] <= nums[mid]){
            // This means left part is being sorted 
            if(nums[low]<= target && target <= nums[mid]){
                // Elemenet is present so 
                high = mid -1 ;
            }
            else{
                low = mid + 1;
            }
        }

        else{

             if(nums[mid]<= target && target <= nums[high]){
                // Elemenet is present so 
                low = mid + 1 ;
            }
            else{
                high  = mid - 1;
            }

        }

        mid = low + (high-low)/2 ;
    }
    return false ; 
        
    }
};