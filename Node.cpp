#include "Node.h"
#include "Student.h"

// Constructor: store the student and initialize next to nullptr
Node::Node(Student* newStudent) {
    student = newStudent;
    next = nullptr;
}

// Destructor: delete the student, but NOT the next node
Node::~Node() {
    delete student;   // free the Student object
    student = nullptr;
    next = nullptr;   // avoid dangling pointers
}

// Return the next node
Node* Node::getNext() {
    return next;
}

// Return the student stored in this node
Student* Node::getStudent() {
    return student;
}

// Set the next pointer
void Node::setNext(Node* newNext) {
    next = newNext;
}
