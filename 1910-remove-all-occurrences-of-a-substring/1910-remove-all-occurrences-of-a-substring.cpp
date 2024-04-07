class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        // Each Time Checking if the Possible value is present in the Substring or not 
        while(s.find(part) != string::npos){
            s.erase(s.find(part) , part.length());
        }
        return s ; 
        
    }
};