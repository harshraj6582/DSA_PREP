#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class NStack {
    int *a, *top, *next;
    int n; // Number of Stacks
    int size; // Size of the Main Array
    int freeSpot; // Tells the Free Space in the main Array

public:
    NStack(int _n, int _s) : n(_n), size(_s) {
        freeSpot = 0;
        a = new int[size];
        top = new int[n];
        next = new int[size];

        for (int i = 0; i < n; i++) {
            top[i] = -1;
        }

        for (int i = 0; i < size; i++) {
            next[i] = i + 1;
        }
        next[size - 1] = -1;
    }

    bool push(int X, int m) {
        if (freeSpot == -1) {
            return false; // Stack Overflow
        }
        // Find the index
        int index = freeSpot;
        freeSpot = next[index];
        a[index] = X;
        next[index] = top[m - 1];
        top[m - 1] = index;

        return true;
    }

    // Pop from the mth Stack
    int pop(int m) {
        if (top[m - 1] == -1) {
            return -1; // Stack Underflow
        }
        int index = top[m - 1];
        top[m - 1] = next[index];
        int poppedElement = a[index];
        next[index] = freeSpot;
        freeSpot = index;
        return poppedElement;
    }

    ~NStack() {
        delete[] a;
        delete[] top;
        delete[] next;
    }
};

int main() {
    NStack ns(3, 10);

    ns.push(15, 1);
    ns.push(45, 1);

    cout << ns.pop(1) << endl; // Should print 45
    cout << ns.pop(1) << endl; // Should print 15
    cout << ns.pop(1) << endl; // Should print -1 (Stack Underflow)

    ns.push(17, 2);
    ns.push(49, 2);

    cout << ns.pop(2) << endl; // Should print 49
    cout << ns.pop(2) << endl; // Should print 17
    cout << ns.pop(2) << endl; // Should print -1 (Stack Underflow)

    return 0;
}
