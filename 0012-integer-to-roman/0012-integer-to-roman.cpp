#include <string>

class Solution {
public:
    std::string intToRoman(int num) {
        std::string ans = "";
        while (num > 0) {
            while (num >= 1000) {
                ans.push_back('M');
                num = num - 1000;
            }
            while (num >= 900) {
                ans.push_back('C');
                ans.push_back('M');
                num = num - 900;
            }
            while (num >= 500) {
                ans.push_back('D');
                num = num - 500;
            }
            while (num >= 400) {
                ans.push_back('C');
                ans.push_back('D');
                num = num - 400;
            }
            while (num >= 100) {
                ans.push_back('C');
                num = num - 100;
            }
            while (num >= 90) {
                ans.push_back('X');
                ans.push_back('C');
                num = num - 90;
            }
            while (num >= 50) {
                ans.push_back('L');
                num = num - 50;
            }
            while (num >= 40) {
                ans.push_back('X');
                ans.push_back('L');
                num = num - 40;
            }
            while (num >= 10) {
                ans.push_back('X');
                num = num - 10;
            }
            while (num >= 9) {
                ans.push_back('I');
                ans.push_back('X');
                num = num - 9;
            }
            while (num >= 5) {
                ans.push_back('V');
                num = num - 5;
            }
            while (num >= 4) {
                ans.push_back('I');
                ans.push_back('V');
                num = num - 4;
            }
            while (num >= 1) {
                ans.push_back('I');
                num = num - 1;
            }
        }
        return ans;
    }
};
