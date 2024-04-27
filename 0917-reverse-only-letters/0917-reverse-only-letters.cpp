#include <string>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        // The ASCII Value of the Characters are from 65 to 90 (uppercase) and 97 to 122 (lowercase)
        // We will be using the Two Pointer Approach 
        // If the ASCII value of the Character is in the range of 
        // 65 to 90 or 97 to 122 then only we will interchange them 

        int start = 0;
        int end = s.size() - 1;
        
        while (start <= end) {
            if (((int(s[start]) >= 65 && int(s[start]) <= 90) || (int(s[start]) >= 97 && int(s[start]) <= 122)) &&
                ((int(s[end]) >= 65 && int(s[end]) <= 90) || (int(s[end]) >= 97 && int(s[end]) <= 122))) {
                swap(s[start], s[end]);
                start++;
                end--;
            } else if (int(s[start]) < 65 || (int(s[start]) > 90 && int(s[start]) < 97) || int(s[start]) > 122) {
                start++;
            } else {
                end--;
            }
        }
        return s;
    }
};
