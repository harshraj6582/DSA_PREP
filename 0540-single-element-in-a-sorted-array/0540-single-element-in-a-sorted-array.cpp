class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // There is single element that appears only once we have to find out that element 
        // Since the Array is being sorted we have to use the concept of Binary Search

        unordered_map<int,int> mp ; 
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second == 1 ){
                return it.first ; 
            }
        }
        return -1 ; 


    }
};