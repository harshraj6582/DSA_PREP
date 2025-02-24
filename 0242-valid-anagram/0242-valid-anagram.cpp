class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin() , s.end());
        // sort(t.begin() , t.end());

        // if(s.size() != t.size()){
        //     return false ; 
        // }
        // if(s == t) return true ; 
        // return false ; 

        // This is the Brute Force Approach as we are using the inbuilt function so the time complexity is O(NLogN)
        /*******************************************************************************************************************************************
        // The Second Approach is using the Map Data Strcture to count the Number of the Elemnts in it 
        **///

        // unordered_map<char,int> mp ; 
        // for(char it : s ){
        //     mp[it]++;
        // }
        // for(char it : t){
        //     mp[it]--;
        // }

        // for(auto it : mp){
        //     if(it.second != 0){
        //         return false ; 
        //     }
        // }       
        // return true ;  


        int count[26] = {0};
        // Count the Frequency of each of the charcater 
        for(char x : s){
            count[x - 'a' ]++;
        }
        for(char x : t){
            count[x - 'a']--;
        }

        for(int val : count){
            if(val != 0){
                return false; 
            }
        }
        return true ; 
    }
};