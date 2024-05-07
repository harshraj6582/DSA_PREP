#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        int size = v.size();
        if (size == 0) return ""; // Handle the case where the vector is empty
        
        string ans;
        char current_char = 0;
        bool flag = true;

        int i = 0; // Declare i here

        while (true) {
            for (auto &str : v) {
                if (i >= str.size()) {
                    flag = false;
                    break;
                }
                if (current_char == 0) {
                    current_char = str[i];
                } else if (str[i] != current_char) {
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                break;
            }
            ans += current_char;
            current_char = 0; // Reset current_char
            i++; // Increment i here
        }
        return ans;
    }
};
