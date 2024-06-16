class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0 ;
        string ans = "";
        int pointer_n1 = num1.size() - 1 ;
        int pointer_n2  = num2.size() - 1 ;
        // Checkig for the Loop Condition 
        while(pointer_n1 >= 0  || pointer_n2 >= 0 || carry > 0){
            // Checking if there is some of the intial digits which are being left to get added 
            int num_1 =  pointer_n1 >= 0 ? (num1[pointer_n1] - '0') : 0 ;
            int num_2 = pointer_n2 >= 0 ? (num2[pointer_n2] - '0') : 0 ;
            int sum = num_1 + num_2 + carry  ;
            int digit = sum % 10 ;
            carry  = sum  / 10 ;
            ans = to_string(digit) + ans;

            pointer_n1--;
            pointer_n2--;

           

        }
         return ans ; 

        
    }
};