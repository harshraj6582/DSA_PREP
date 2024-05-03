class Solution {
public:
    int strStr(string haystack, string needle) {
        char word = needle[0];
        // Checking the First Element of the String 2
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == word) {
                int temp = i;
                int j = 0;
                while (j < needle.size() && temp < haystack.size()) {
                    if (needle[j] == haystack[temp]) {
                        j++;
                        temp++;
                    } else {
                        break;
                    }
                }
                if (j == needle.size()) {
                    return i;
                }
            }
        }
        return -1;
    }
};
