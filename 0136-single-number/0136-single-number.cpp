class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // We can store all of them in Unordered Map and then check the frequency of each of the digit 
        // unordered_map<int, int > mp ;
        // for(int num : nums ){
        //     mp[num]++;
        // }

        // for ( auto& pair : mp){
        //     if(pair.second == 1 ){
        //         return pair.first ; 
        //     }
        // }

        // return -1 ; 

        int ans = 0 ;
        for(auto x : nums){
            ans^=x ;

        }
        return ans ; 
        
    }
};