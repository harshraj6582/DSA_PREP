class Solution {
public:
    bool isAnagram(string s, string t) {
//         sort(s.begin() , s.end());
//         sort(t.begin(), t.end());
        
//         // Brute Force Approach 
//         // Time Complexity for this code is O(nlogn)
//         // We will compare if both of the string are equal or not 
//         if(s != t ){
//             return false ; 
//         }
//         else{
//             return true ; 
//         }
        
        // Using the Technique of the Unorderd Map 
        unordered_map<char , int> frequency ; 
        for(char c : s ){
            frequency[c]++;
        }
        for(char c : t){
            frequency[c]--;
        }
        bool allZeros = true;

    // Iterate through the map
    for (const auto& pair : frequency)
    {
        if (pair.second != 0)
        {
            return false ;
        }
    }
        return true ;
        
    }
};