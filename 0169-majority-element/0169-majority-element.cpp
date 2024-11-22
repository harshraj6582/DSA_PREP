class Solution {
public:
    int majorityElement(vector<int>& nums) {
       // Edge Case 
       int size = nums.size(); 
       int ans ; 
       if(nums.size() == 1 ){
        // Because the size of the Arry is 1 then we can return the single 
        return nums[0];
       }
    unordered_map<int , int > hash ; 
    for(auto num : nums){
        hash[num]++; 
    }
    // We do have the stored frequency of the character 
    for(auto it : hash){
        if(it.second > size/2 ){
            ans = it.first; 
            return ans ; 
        }

    }
    return -1 ; 
        
    }
};