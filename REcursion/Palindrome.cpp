#include<iostream>
using namespace std;

bool Valid_Palindrome(string word, int left, int right, int &ans) {
    if (left >= right) {
        return ans;
    }
    if (word[left] == word[right]) {
        ans = 1;
    } else {
        ans = 0;
        return ans;
    }
    return Valid_Palindrome(word, left + 1, right - 1, ans); 
}

int main() {
    string word = "racecar";
    int ans = 0;
    int left = 0;
    int right = word.size() - 1;

    bool check = Valid_Palindrome(word, left, right, ans);
    if (check == 0) {
        cout << "Not a Valid Palindrome";
    } else {
        cout << "This is a valid Palindrome ";
    }

    return 0;
}
