#include <vector>
#include <string>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int total = 0;
        int i = 0;
        while (i < chars.size()) {
            char s = chars[i];
            int count = 1;
            while (i < chars.size() - 1 && s == chars[i + 1]) {
                count++;
                i++;
            }
            std::string numStr = (count > 1) ? std::to_string(count) : "";
            chars[total++] = s;
            if (count > 1) {
                for (char digit : numStr) {
                    chars[total++] = digit;
                }
            }
            i++;
        }
        chars.resize(total);
        return total;
    }
};
