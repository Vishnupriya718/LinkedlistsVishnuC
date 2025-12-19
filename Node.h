#ifndef NODE_H
#define NODE_H

using namespace std;

class Student; // forward declaration so we can use Student*

// Node class for a singly linked list.
// Each Node stores a Student pointer and a pointer to the next Node.
class Node {
private:
    Student* student; // the student stored in this node
    Node* next;       // pointer to the next node in the list

public:
    // Constructor: takes ownership of the Student pointer
    Node(Student* newStudent);

    // Destructor: deletes ONLY the student, not the next node
    ~Node();

    // Returns the next node in the list
    Node* getNext();

    // Returns the student stored in this node
    Student* getStudent();

    // Sets the next pointer
    void setNext(Node* newNext);
};

#endif
