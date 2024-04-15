class Solution {
public:
    // Specify the return type of the function
    bool check_palindrome(string s, int i, int j) {
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left <= right) {
            if (s[left] != s[right]) {
                // Check if palindrome after removing either left or right character
                return check_palindrome(s, left + 1, right) || check_palindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};
