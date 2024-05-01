#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compareStrings(const string& a, const string& b) {
    return a + b > b + a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> numsStr;
        for (int num : nums) {
            numsStr.push_back(to_string(num));
        }
        
        sort(numsStr.begin(), numsStr.end(), compareStrings);
        
        string largestNum;
        for (const string& numStr : numsStr) {
            largestNum += numStr;
        }
        
        // Handle the case when the largestNum is "0"
        if (largestNum[0] == '0') {
            return "0";
        }
        
        return largestNum;
    }
};

