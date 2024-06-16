#include <iostream>
#include <cstring> // For strchr and strrchr
#include <vector>
using namespace std;

// Search From Left to Right
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

// Search From Right to Left
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

    int left = Search_Left(word, target);
    cout << "This is using the approach from the Left Traversing: " << left << endl;

    int right = Search_Right(word, target);
    cout << "This is using the approach from the Right Traversing: " << right << endl;

    // Convert std::string to C-style string
    const char* c_word = word.c_str();

    //// USING RECURSION ////////////////////
    int leftrec = leftRecursion(word, target, i);
    cout << "This is using recursion from the Left Traversing: " << leftrec << endl;

    int rightrec = rightRecursion(word, target, word.size() - 1);
    cout << "This is using recursion from the Right Traversing: " << rightrec << endl;

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
