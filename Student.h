#ifndef STUDENT_H
#define STUDENT_H

#include <cstring>
using namespace std;

class Student {
 private :
  char name[50];// name only this many characters
 public:
  //the constructor!(does the taking)
  Student(const char* newName);
  // giving the string back
  const char* getName() const; 
};
#endif
