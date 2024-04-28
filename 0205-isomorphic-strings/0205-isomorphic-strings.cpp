class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // We are using the Concept of Hashing 
        
        int hash[256] = {0};
        // As there are 256 Characters in the Hash Table 
        bool  isMapped[256] = {0};
        
        
        // Mapping the Characters of the String s 
        for(int i = 0 ; i < s.size() ; i++){
            if(hash[s[i]] == 0 && isMapped[t[i]] == 0 ){
                hash[s[i]] = t[i];
                isMapped[t[i]] = true ;
            }
        }
        
        // Checking if the Mapping is Successful or not 
        for(int i = 0 ; i <s.size() ; i++){
            if(char(hash[s[i]]) != t[i]){
                return false; 
            }
        }
        return true ; 
    }
};