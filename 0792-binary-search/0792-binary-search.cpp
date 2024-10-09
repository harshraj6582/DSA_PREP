class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int n = nums.size();
        // int start = 0 ;
        // int end = n -1 ;
        // int mid = start + (end - start)/2;

        // while(start <= end){
        //     if(nums[mid] == target){
        //         return mid ; 
        //     }
        //     else if (nums[mid] > target){
        //         end = mid  - 1 ;
        //     }
        //     else{
        //         start = mid + 1 ;
                
        //     }
        //     mid = start + (end - start )/2 ;
        // }



        // return -1 ; 


    ///////////////////////////////////////////////////////This is Recursive Approach///////////////////////////////////////////////////////////////
    return binarySearch(nums , 0 , nums.size() - 1 , target);


    }


int binarySearch(vector<int>& nums, int low, int high, int target) {

    if (low > high) return -1; 

    
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}



};