class Solution {
public:
   void buildAns(stack<string>&s , string &ans){
    if(s.empty()){
        return ;
    }
    string minPath = s.top() ; s.pop();
    buildAns(s , ans );
    ans += minPath;
   }


    string simplifyPath(string path) {
        // We Will be using the concept of Stack 
        stack<string> s ;
        int i = 0 ;
        // For Traversing the Whole String 
        while( i < path.size()){
            int start = i ;
            int end = i + 1 ;
            while(end < path.size() && path[end] != '/'){
                ++end ;
            }
            // Finding the Min Path 
            string minPath = path.substr(start , end - start );
            i = end ;

            if(minPath == "/" || minPath == "/."){
                continue ;
            }
            if(minPath != "/.."){
                s.push(minPath);
            }
            else if(!s.empty()) {
                s.pop();
            }
        }

        string ans = s.empty() ? "/" : "";
        buildAns(s , ans);
        return ans ;
        
        
    }
};