class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        // // We are just using the cocnept of Extra Space in so we are just creating an extra array and them swapping the element
        // // Edge Cases is when the size of  array is 0 or the K == 0 
        // int size = nums.size();
        // if((k == 0) || (size == 0) ){
        //     return ; // In this case we are just returning thr original array
        // }

        // // Make the copys of the nums vector 
        // vector<int> numsCopy(size);
        // // Make the copy of the Array Elements 
        // for(int i  = 0 ; i < size ; i++){
        //     numsCopy[i] = nums[i];
        // }

        // // Rotate the Elements 
        // for(int i = 0 ; i < size ; i++){
        //     nums[(i+k) % size] = numsCopy[i];
        // }

        // Now we are not using the extra Space 
        // So we are just reversing the elements in such order that the we end up getting the number 
        int size = nums.size();
        k = k % size ;
        reverse(nums.begin() , nums.begin() + (nums.size() - k));

        reverse(nums.begin() + (nums.size() -  k) , nums.end() );

        reverse(nums.begin() , nums.end()); 

    }
};
