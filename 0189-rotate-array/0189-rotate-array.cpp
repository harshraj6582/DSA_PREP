class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
       int size = nums.size();
       if((k == 0 ) || (size == 0)){
        return ; // In this case we are just returning the original array 
       }
       // Make the copy of the nums Vector
       vector<int> numsCopy(size);

       for(int i = 0 ; i < size ; i++){
        numsCopy[i] = nums[i];
       }

       // Npw just Rotate the Array 
       for(int i =  0 ; i < size ; i++){
        nums[(i+k) % size ] = numsCopy[i];
       }

    }
};
