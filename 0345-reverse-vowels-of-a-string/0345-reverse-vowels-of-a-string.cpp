class Solution {
public:
    
      bool vowel(char s) {
        return (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' ||
                s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U');
    }
    
    string reverseVowels(string s) {
        int start = 0 ;
        int end = s.size() -1 ;
        
        // Two Pointer Approach along with While Loop and Bool Function 
        while(start<end){
            if(vowel(s[start]) && !vowel(s[end])){
                end--;
              
            } 
             else if(!vowel(s[start]) && vowel(s[end])){
                start++;
            } 
            
             else if(vowel(s[start]) && vowel(s[end])){
                 swap(s[start] , s[end]);
                 start++;
                 end--;
                 
            } 
            else{
                start++;
                end-- ; 
            }
            
            
        }
        return s ;
        
    }
};