#include <iostream>
#include <cstring> // For strchr and strrchr
#include <string>
using namespace std;

// Search From Left to Right (Iterative)
int Search_Left(const string& s, char target) {
    int size = s.size();
    int ans = -1; // Use -1 to indicate "not found"

    for (int i = 0; i < size; i++) {
        if (s[i] == target) {
            ans = i;
            break; // Return on the first occurrence
        }
    }
    return ans;
}

// Search From Right to Left (Iterative)
int Search_Right(const string& s, char target) {
    int size = s.size();
    int ans = -1; // Use -1 to indicate "not found"

    for (int i = size - 1; i >= 0; i--) {
        if (s[i] == target) {
            ans = i;
            break; // Return on the first occurrence
        }
    }
    return ans;
}

// Search From Left to Right using Recursion
int leftRecursion(const string& word, char ch, int i) {
    // Base Case
    if (i >= word.size()) {
        return -1; // Return -1 if character is not found
    }
    // One Case
    if (word[i] == ch) {
        return i; // Return the index if character is found
    }
    // Next Recursion Call
    return leftRecursion(word, ch, i + 1); // Propagate the result
}

// Search From Right to Left using Recursion
int rightRecursion(const string& word, char ch, int i) {
    // Base Case
    if (i < 0) {
        return -1; // Return -1 if character is not found
    }
    // One Case
    if (word[i] == ch) {
        return i; // Return the index if character is found
    }
    // Next Recursion Call
    return rightRecursion(word, ch, i - 1); // Propagate the result
}

int main() {
    string word = "harsh";
    char target = 'h';
    int i = 0;

    // Search from Left to Right (Iterative)
    int left = Search_Left(word, target);
    cout << "Using iterative left search: " << left << endl;

    // Search from Right to Left (Iterative)
    int right = Search_Right(word, target);
    cout << "Using iterative right search: " << right << endl;

    // Convert std::string to C-style string
    const char* c_word = word.c_str();

    //// USING RECURSION ////////////////////
    // Search from Left to Right (Recursive)
    int leftrec = leftRecursion(word, target, i);
    cout << "Using recursion from the left: " << leftrec << endl;

    // Search from Right to Left (Recursive)
    int rightrec = rightRecursion(word, target, word.size() - 1);
    cout << "Using recursion from the right: " << rightrec << endl;

    // Find the first occurrence using strchr
    const char* firstOccurrence = strchr(c_word, target);
    if (firstOccurrence) {
        cout << "First occurrence using strchr: " << (firstOccurrence - c_word) << endl;
    } else {
        cout << "Character not found using strchr" << endl;
    }

    // Find the last occurrence using strrchr
    const char* lastOccurrence = strrchr(c_word, target);
    if (lastOccurrence) {
        cout << "Last occurrence using strrchr: " << (lastOccurrence - c_word) << endl;
    } else {
        cout << "Character not found using strrchr" << endl;
    }

    return 0;
}
