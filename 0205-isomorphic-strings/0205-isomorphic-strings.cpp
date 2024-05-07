class Solution {
public:
    bool isIsomorphic(string s, string t) {
//         // We are using the Concept of Hashing 
        
//         int hash[256] = {0};
//         // As there are 256 Characters in the Hash Table 
//         bool  isMapped[256] = {0};
        
        
//         // Mapping the Characters of the String s 
//         for(int i = 0 ; i < s.size() ; i++){
//             if(hash[s[i]] == 0 && isMapped[t[i]] == 0 ){
//                 hash[s[i]] = t[i];
//                 isMapped[t[i]] = true ;
//             }
//         }
        
//         // Checking if the Mapping is Successful or not 
//         for(int i = 0 ; i <s.size() ; i++){
//             if(char(hash[s[i]]) != t[i]){
//                 return false; 
//             }
//         }
//         return true ; 
        
        
        // Converting each character to an integer which is the 
        // appearance order in the string 
        
        // For each of the Unique Characyer we are storing the 
        // unique interger 
        
        unordered_map<char , int > s2i , t2j;
        
        for(auto &c : s){
            if (s2i.count(c) != 0 )continue ;
            s2i[c] = s2i.size();
        }
        for (auto& c : t) {
            if (t2j.count(c) != 0) continue;
            t2j[c] = t2j.size();
        }
        
        // Compare the Integer stored for each of the character 
        for(int i = 0 ; i < s.size() ; i++){
            if(s2i[s[i]] != t2j[t[i]]) return false ;
        }
        return true ; 
    }
};