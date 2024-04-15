class Solution {
public:
	string removeDuplicates(string s) {

	// Creating a New Sub Array which will be used to store the Ans 
        string ans ;
    // Pushing the First Element as this is the intial condition 
        if(!s.empty())
        {
            ans.push_back(s[0]);
        }
    // Checking the Condition for each of the elements which are next to the 0th element 
        for(int i = 1 ; i < s.length() ; i++){
            
            // Checking if the last element of the ANS string and S Array are same 
            if( !ans.empty() && s[i] == ans.back() ){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
                
            }
        }
  

		return ans;      
              }
};