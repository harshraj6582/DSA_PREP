class Solution {
public:
    
    string Recursive_Solution(string &s , string part ){
        // Check for the Base Case
        if(s.find(part) == string::npos){
            // That Certain  Part is not present in the String 
            return  s ; 
        }
        else{
             // One Case 
            s.erase(s.find(part) , part.length());
            // Next Recursive Call
             return Recursive_Solution(s, part);
        }
       
        
        
        
        
        
    }
    
    
    string removeOccurrences(string s, string part) {
        // while(s.find(part) != string::npos){
        //     s.erase(s.find(part) , part.length());
        // }
        // return s ; 
        
       return  Recursive_Solution(s,part);
        
    }
};