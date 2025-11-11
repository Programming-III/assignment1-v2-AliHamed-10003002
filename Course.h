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

void addStudent(const Student &s){
students+= &s;
}

void displayCourseInfo(){
cout<<"Course name: <<courseName<<endl<<" Course code: "<<coursecode<<endl<<" Maximum students: "<<maxStudents<<endl<<
"Current number of enrolled students: "<<currentstudents<<endl<<" Student's info: "<<students->display
}













#endif
