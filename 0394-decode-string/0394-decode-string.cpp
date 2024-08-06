class Solution {
public:
    string decodeString(string s)
     {
        stack<string>st ;
        for(auto ch : s ){
            if(ch == ']'){
                string stringToRepeat = "";
                while(!st.empty() && !isdigit(st.top()[0])){
                    string top = st.top();
                    stringToRepeat += top =="[" ? "" : top ;
                    st.pop();
                }
                // Now we have the String AFter that we have to find 
                // out the Numeric Number 

                string numericTimes = "";
                
                while(!st.empty() && isdigit(st.top()[0])){
                    numericTimes += st.top();
                    st.pop();
                }

                // Reverse the Njumeric Number 
                reverse(numericTimes.begin() , numericTimes.end());

                int n = stoi(numericTimes);

                // Final Decoding 
                string currentdecode = "";
                while(n--){
                    currentdecode += stringToRepeat;
                }
                st.push(currentdecode);
            }
            else{
                string temp(1,ch);
                st.push(temp);
            }
        }
        // Now we have the Answer but we have to reverse the following
        string ans = ""; 
        while(!st.empty()){
            ans += st.top();
            st.pop();
        } 

        reverse(ans.begin() , ans.end());
        return ans ; 
       
       
       

      
        
    }
};