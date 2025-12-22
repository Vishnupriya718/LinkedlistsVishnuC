#include <iostream>
using namespace std;

#include "Student.h"
#include "Node.h"

// GLOBAL head pointer 
Node* head = nullptr;

// Function prototypes
void addStudent(const char* name);
void print(Node* next);

int main() {
    int count;
    cout << "How many students do you want to enter: ";
    cin >> count;
    cin.ignore();

    for (int i = 0; i < count; i++) {
        char name[50];
        cout << "Enter name for student " << (i + 1) << ": ";
        cin.getline(name, 50);

        addStudent(name);
        print(head);
        cout << endl;
    }

    //  delete all nodes
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->getNext();
        delete current;
        current = next;
    }

    return 0;
}

// Add a new student to the end  of the list
void addStudent(const char* name) {
    Student* s = new Student(name);
    Node* n = new Node(s);

    if (head == nullptr) {
        head = n;
    } else {
        Node* current = head;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(n);
    }
}

// Recursive print function
void print(Node* next) {
    if (next == nullptr) {
        return;
    }

    cout << next->getStudent()->getName() << " ";
    print(next->getNext());
}

