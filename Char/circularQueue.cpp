#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int deque[MAX_SIZE];

int front = -1;
int rear = -1;

bool isEmpty() {
    return (front == -1 && rear == -1);
}

bool isFull() {
    return ((rear + 1) % MAX_SIZE == front);
}

void insertFront(int x) {
    if (!isFull()) {
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front == 0) ? MAX_SIZE - 1 : front - 1;
        }
        deque[front] = x;
    } else {
        cout << "Deque is full" << endl;
    }
}

void insertRear(int x) {
    if (!isFull()) {
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        deque[rear] = x;
    } else {
        cout << "Deque is full" << endl;
    }
}

void deleteFront() {
    if (!isEmpty()) {
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    } else {
        cout << "Deque is empty" << endl;
    }
}

void deleteRear() {
    if (!isEmpty()) {
        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear == 0) ? MAX_SIZE - 1 : rear - 1;
        }
    } else {
        cout << "Deque is empty" << endl;
    }
}

int getFront() {
    if (!isEmpty()) {
        return deque[front];
    }
    return -1;
}

int getRear() {
    if (!isEmpty()) {
        return deque[rear];
    }
    return -1;
}

void printQueue() {
    if (!isEmpty()) {
        int i = front;
        while (true) {
            cout << deque[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX_SIZE;
        }
        cout << endl;
    } else {
        cout << "Deque is empty" << endl;
    }
}

int main() {
    insertFront(5);
    insertRear(10);
    insertRear(11);
    insertFront(19);

    cout << "Elements in deque: ";
    printQueue();  // Output: 19 5 10 11

    cout << "Front element: " << getFront() << endl;  // Output: 19
    cout << "Rear element: " << getRear() << endl;    // Output: 11

    if (isFull()) {
        cout << "Deque is full" << endl;
    } else {
        cout << "Deque is not full" << endl;
    }

    deleteRear();
    cout << "Elements in deque after deleting rear: ";
    printQueue();  // Output: 19 5 10

    cout << "New rear element: " << getRear() << endl;  // Output: 10

    deleteFront();
    cout << "Elements in deque after deleting front: ";
    printQueue();  // Output: 5 10

    cout << "New front element: " << getFront() << endl;  // Output: 5

    if (isEmpty()) {
        cout << "Deque is empty" << endl;
    } else {
        cout << "Deque is not empty" << endl;
    }

    return 0;
}
