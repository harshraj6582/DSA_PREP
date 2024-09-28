class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    // Make a Temp Array 
    vector<int> temp ; 
    // Copy of the non-zeroes elemenst 
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] != 0 ){
            // Push this element in the temp array 
            temp.push_back(nums[i]);
        }
    }
    // Number of Non- zero element 
    int non_zero = temp.size() ;
    for(int i = 0 ;  i < non_zero ; i++){
        // Would push all the non-zero element in the nums
        nums[i] = temp[i];
    }
    // This would create a 
    for(int i = non_zero ; i <  nums.size() ; i++)
    {
        nums[i] = 0 ;
    }

    }
};