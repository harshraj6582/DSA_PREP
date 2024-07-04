#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Function to insert an element in sorted order into a stack
void insertElement(stack<int> &st, int x) {
    // Base Case: If stack is empty or the top element is less than x, push x
    if (st.empty() || st.top() < x) {
        st.push(x);
        return;
    }
    
    // Recursive Case: If top element is greater than x, pop it and recursively insert x
    int temp = st.top();
    st.pop();
    insertElement(st, x);
    st.push(temp);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    int x = 25;
    
    insertElement(st, x);

    while (!st.empty()) {
        int curr = st.top();
        cout << curr << endl;
        st.pop();
    }

    return 0;
}
