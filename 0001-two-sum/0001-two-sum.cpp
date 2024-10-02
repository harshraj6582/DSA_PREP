class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int , int > mp ; 
        for(int i = 0 ; i < nums.size() ;  i++){
            int a  = nums[i];
            int complement = target - a ;
            if(mp.find(complement) != mp.end()){
                return  {mp[complement] , i };
            }

            mp[a] = i ;
        }
       
       return {} ; 
    }
};
