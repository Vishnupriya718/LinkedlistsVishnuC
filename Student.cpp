#include "Student.h"

// Copy the provided name into the internal C-string
Student::Student(const char* newName) {
    strcpy(name, newName);
}

// Return the student's name
const char* Student::getName() const {
    return name;
}
