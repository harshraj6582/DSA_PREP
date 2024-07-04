#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);

    int size = st.size();
    stack<int> newStack;
    int mid = size / 2 + 1;
    int count = mid;

    while (!st.empty()) {
        if (count == 1) {
            st.pop();
        } else {
            int temp = st.top();
            st.pop();
            newStack.push(temp);
        }
        count--;
    }

    while (!newStack.empty()) {
        int temp = newStack.top();
        newStack.pop();
        st.push(temp);
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
