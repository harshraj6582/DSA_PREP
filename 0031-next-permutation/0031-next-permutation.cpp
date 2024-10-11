class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        

        int n = nums.size();

        int index = -1 ; // Break Point 
        for(int i = n-2 ; i >= 0 ; i--){
            // Check for the COnditio where there is Break Point in the Array 
            if(nums[i] < nums[i + 1]){
                // Index i is the Breakpoint 
                index = i ;
                break ; 
            }
        }

        // Now we have the Breakpoint we have to find ou the Element from the Right Side of the Array which is smallest 
        // But the Value is greater 
        if(index ==  -1 ){
            reverse(nums.begin() , nums.end());
            return ; 
        }

        for(int i = n - 1 ; i > index ; i--){
            if(nums[i] > nums[index]){
                swap(nums[i] , nums[index]) ;
                break ; 
            }
        }

        reverse(nums.begin() + index + 1 , nums.end());
        return ; 
    }
};