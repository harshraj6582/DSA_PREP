class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin(), t.end());
        
        // Brute Force Approach 
        // Time Complexity for this code is O(nlogn)
        // We will compare if both of the string are equal or not 
        if(s != t ){
            return false ; 
        }
        else{
            return true ; 
        }
        
    }
};