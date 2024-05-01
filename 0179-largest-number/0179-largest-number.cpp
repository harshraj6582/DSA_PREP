class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> numsStr;
        for (int num : nums) {
            numsStr.push_back(to_string(num));
        }
        
        sort(numsStr.begin(), numsStr.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });
        
        string largestNum;
        for (const string& numStr : numsStr) {
            largestNum += numStr;
        }
        
        if (largestNum[0] == '0') {
            return "0";
        }
        
        return largestNum;
    }
};