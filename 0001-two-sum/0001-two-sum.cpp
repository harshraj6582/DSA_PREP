class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;  

        // for (int i = 0; i < nums.size() - 1 ; i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[i] + nums[j] == target) {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;  // Return immediately after finding the first pair
        //         }
        //     }
        // }
        
        // return ans;  // Should never reach here as per problem constraints


        /**************************************************************************************///
        /// This is the Brute Force Approach So we need to find the Optimnal One 

        // The New Approach is to Make a Hash Map and store all the Indices to the elements 

        unordered_map<int , int > mp ; 

        int n = nums.size(); 

        // Build the Hash Table 
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]] = i ; 
        }

        // Find the Complement 
        for(int i = 0 ; i < n ; i++){
            int com = target - nums[i];
            if(mp.count(com) && mp[com] != i){
                return {i , mp[com]};
            }
        }

        return {};
    }
};
