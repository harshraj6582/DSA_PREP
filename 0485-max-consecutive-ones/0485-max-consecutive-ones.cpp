class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        // We will have a Counter for this position and if this points to any of the element other than 1 it will be again set to 0
        int count = 0 ; 
        int size  = nums.size() ;
        int maxAns = 0 ;
        for(int i = 0 ; i < size ; i++){
            if(nums[i] == 1 ){
                // In this case we will just increment the counter 
                
                count++;
                if(maxAns < count){
                    maxAns = count ;
                }
                
                
                
            }
            else{
                count = 0 ;
            }
        }

        return maxAns ; 
        
    }
};