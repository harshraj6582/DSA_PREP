#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    vector<int> arr;

    // Fix the condition in the while loop
    while (!s.empty()) {
        int temp = s.top();
        s.pop();
        arr.push_back(temp);
    }

    // Find the mid index (already 1-based)
    int mid = (arr.size() / 2) + 1; // Fixed the missing semicolon

    // Use a new stack to store the filtered elements
    stack<int> st;

    // Corrected the loop and the condition
    for (int i = 0; i < arr.size(); i++) {
        if (i == mid - 1) {
            continue;
        }
        st.push(arr[i]);
    }

    // Printing the elements in the new stack
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
