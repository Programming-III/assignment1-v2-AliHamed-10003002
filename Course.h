#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class course{
private:
string coursecode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;

public:
course(string coursecode, string courseName, int maxStudents, Student* students, int currentStudents){
this-> coursecode = coursecode;
this-> courseName = courseName;
this-> maxStudents = maxStudents;
this-> students = students;
this-> currentStudents = currentStudents;
}
course(){
  coursecode = "";
  courseName = "";
  maxStudents = 0;
  currentStudents = 0;
}

~course() {}

void addStudent();

 void displayCourseInfo();
}














#endif
