class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    unordered_map<int , int > mp ; 
    //    for(int i = 0 ; i < nums.size() ; i++){
    //     mp[nums[i]] ++;
    //    }

    //    int count = nums.size() / 2 ;
    //    for(auto& pair : mp){
    //     if(pair.second > count){
    //         return pair.first;
    //     }
    //    }

    //    return -1 ; 

    // We are just applying the Moore Voting Algorithm
    int count = 0 ;
    int element = nums[0];
    for(int i = 0 ; i < nums.size() ; i++){
        if(count == 0){
            count = 1 ;
            element = nums[i];
        }
        else if (element == nums[i]){
            count ++ ;
        }
        else{
            count -- ;
        }
    }
    return element ; 
        
    }
};