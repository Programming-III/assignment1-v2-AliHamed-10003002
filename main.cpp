#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================








// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================
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

void addStudent(const Student &s){
students += &s;
}

 void displayCourseInfo(){
  cout<<"Course name: <<courseName<<endl<<" Course code: "<<coursecode<<endl<<" Maximum students: "<<maxStudents<<endl<<
  "Current number of enrolled students: "<<currentstudents<<endl<<" Student's info: "<<students->display()<<endl;
}
}







// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
