class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0 ;
        int right = 0 ;
        int maximum =  0 ;
        for(int i = 0 ; i < s.size()  ; i++){
            if(s[i] == '('){
                left ++;
            }
            if(s[i] == ')'){
                right ++;
            }
            if(left == right){
                maximum = max(maximum , 2*left);
            }
            if( left < right){
                left = 0 ;
                right = 0 ;
            }
        }

        left  =  0 ;
        right = 0 ;

         for(int i = s.size() - 1  ; i > 0   ; i--){
            if(s[i] == '('){
                left ++;
            }
            if(s[i] == ')'){
                right ++;
            }
            if(left == right){
                maximum = max(maximum , 2*right);
            }
            if( right < left){
                left = 0 ;
                right = 0 ;
            }
        }



        return maximum ;
        
    }
};