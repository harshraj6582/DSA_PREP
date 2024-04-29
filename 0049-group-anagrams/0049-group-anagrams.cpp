class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       // We are using unorderd_map because the answer is not required in the 
       // sorted order 
        unordered_map<string , vector<string>> anag ;
        // Now iterating through each of the elements 
        
        for(auto &word : strs){
            string sortedWord = word ;
            sort(sortedWord.begin() , sortedWord.end());
            anag[sortedWord].push_back(word);
            // This will push the string elements corresponding to the sorted word
        }
        // Now we have to return the vector of vector strings 
        vector<vector<string>> ans ;
        for(auto &word : anag){
            ans.push_back(word.second);
        }
        
        
        return ans ; 
        
            
        }
    
};