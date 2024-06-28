#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* ptr;

    Node() : data(0), ptr(nullptr) {}

    Node(int data, Node* ptr = nullptr) : data(data), ptr(ptr) {}

    void printing() {
        Node* temp = this;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->ptr;
        }
        cout << endl;
    }

    void Insertion_Head(Node* link, Node*& head) {
        if (head == nullptr) {
            cout << "Linked List is empty, inserting at head." << endl;
            head = link;
            link->ptr = nullptr;
        } else {
            cout << "Inserting at head." << endl;
            link->ptr = head;
            head = link;
        }
    }

    void Insertion_Tail(Node* link, Node*& head) {
        if (head == nullptr) {
            cout << "Linked List is empty, inserting at tail." << endl;
            head = link;
            link->ptr = nullptr;
        } else {
            Node* temp = head;
            while (temp->ptr != nullptr) {
                temp = temp->ptr;
            }
            cout << "Inserting at tail." << endl;
            temp->ptr = link;
            link->ptr = nullptr;
        }
    }

    void Insertion_Position(Node* link, Node*& head, int pos) {
        if (head == nullptr) {
            cout << "Linked List is empty, inserting at position " << pos << "." << endl;
            head = link;
            link->ptr = nullptr;
        } else {
            if (pos == 1) {
                link->ptr = head;
                head = link;
            } else {
                Node* temp = head;
                int currentPos = 1;
                while (temp != nullptr && currentPos < pos - 1) {
                    temp = temp->ptr;
                    currentPos++;
                }
                if (temp == nullptr) {
                    cout << "Position " << pos << " exceeds the length of the list." << endl;
                } else {
                    link->ptr = temp->ptr;
                    temp->ptr = link;
                }
            }
        }
    }
};

int main() {
    Node link1;
    Node link2(20);
    Node link5(50);
    Node link4(40, &link5);

    Node* dynamic = new Node(30);
    link1.data = 10;
    link1.ptr = &link2;
    link2.ptr = dynamic;
    dynamic->ptr = &link4;

    // Printing the initial linked list
    cout << "Initial linked list:" << endl;
    link1.printing();

    // Insertion at head
    Node nextnode(60);
    Node* head = &link1;
    head->Insertion_Head(&nextnode, head);

    // Insertion at Tail
    Node last_Node(70);
    last_Node.Insertion_Tail(&last_Node, head);

    // Insertion at position
    int pos = 5;
    Node anyPosition(80);
    anyPosition.Insertion_Position(&anyPosition, head, pos);

    // Printing the updated linked list
    cout << "Linked list after insertions:" << endl;
    head->printing();

    delete dynamic; // Clean up dynamically allocated memory

    return 0;
}
