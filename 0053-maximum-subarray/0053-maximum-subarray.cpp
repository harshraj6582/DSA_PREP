class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int size = nums.size();
        int sum = 0 ;
        for(int i = 0 ; i < size ; i++){
            // Check for the Sum of the Elements 
            sum += nums[i];

            if(sum > maxi){
                // Then just change the value of maxi to sum 
                maxi = sum ;
            }

            // Check for this condition also when the Sum of the SubArray is getting negative 
            if(sum < 0){
                sum = 0 ;
                // Reset the Sum to 0
            }
        }

        return maxi ; 
        
    }
};