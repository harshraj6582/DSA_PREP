class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int , int > mp ; 
       for(int i = 0 ; i < nums.size() ; i++){
        mp[nums[i]] ++;
       }

       int count = nums.size() / 2 ;
       for(auto& pair : mp){
        if(pair.second > count){
            return pair.first;
        }
       }

       return -1 ; 
        
    }
};