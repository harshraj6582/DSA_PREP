#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        while (num > 0) {
            while (num >= 1000) {
                ans.push_back('M');
                num -= 1000;
            }
            while (num >= 900) {
                ans += "CM";
                num -= 900;
            }
            while (num >= 500) {
                ans.push_back('D');
                num -= 500;
            }
            while (num >= 400) {
                ans += "CD";
                num -= 400;
            }
            while (num >= 100) {
                ans.push_back('C');
                num -= 100;
            }
            while (num >= 90) {
                ans += "XC";
                num -= 90;
            }
            while (num >= 50) {
                ans.push_back('L');
                num -= 50;
            }
            while (num >= 40) {
                ans += "XL";
                num -= 40;
            }
            while (num >= 10) {
                ans.push_back('X');
                num -= 10;
            }
            while (num >= 9) {
                ans += "IX";
                num -= 9;
            }
            while (num >= 5) {
                ans.push_back('V');
                num -= 5;
            }
            while (num >= 4) {
                ans += "IV";
                num -= 4;
            }
            while (num >= 1) {
                ans.push_back('I');
                num -= 1;
            }
        }
        return ans;
    }
};
