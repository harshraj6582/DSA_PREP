#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string ans = "";
        int pointer_n1 = num1.size() - 1;
        int pointer_n2 = num2.size() - 1;
        
        return addStringsRecursive(num1, num2, pointer_n1, pointer_n2, carry, ans);
    }
    
    string addStringsRecursive(const string& num1, const string& num2, int pointer_n1, int pointer_n2, int& carry, string& ans) {
        if (pointer_n1 < 0 && pointer_n2 < 0 && carry <= 0) {
            return ans;
        }
        
        int num_1 = pointer_n1 >= 0 ? (num1[pointer_n1] - '0') : 0;
        int num_2 = pointer_n2 >= 0 ? (num2[pointer_n2] - '0') : 0;
        
        int sum = num_1 + num_2 + carry;
        int digit = sum % 10;
        ans = to_string(digit) + ans;
        
        carry = sum / 10;
        
        pointer_n1--;
        pointer_n2--;
        
        return addStringsRecursive(num1, num2, pointer_n1, pointer_n2, carry, ans);
    }
};

