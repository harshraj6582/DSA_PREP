class Solution {
public:
    string removeKdigits(string num, int k) {
        // we will be using the Concept of Stack for this 
        string ans ; 
        stack<char>st ;
        for(auto digit : num){
            if(k > 0 ){
                while(!st.empty() && st.top() > digit){
                    st.pop();
                    k--;
                    if(k == 0)
                    break ; 
                }
            }
            st.push(digit);
        }

        if(k >  0){
            while(!st.empty() && k ) {
                st.pop();
                k--;
            }

        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        // Removing of the Leading Zeroes 
        while(ans.size() > 0 && ans.back() == '0'){
            ans.pop_back();
        }

        // Get the real anbs 
        reverse(ans.begin() , ans.end());

        return ans == "" ? "0" : ans ;
        
    }
};