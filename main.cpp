#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person{
private:
    string name;
    int id;
public:
Person(string name, int id){
    this->name = name;
    this->id = id;
}
void setName(String n){
name = n;
}
void setID(int x){
    id = x;
}

string getName(){
    return name;
}

int getID(){
return id;
}

virtual void display(){
    cout<<"Student name: "<<getName()<<"Student ID: "<<getID()<<endl;
}


}


// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================
class instructor : public person{
private:
string department;
int experienceYears;
public:
instructor(string dep, int expyears, string name, int id) : Person(name,id){
department = dep;
experienceYears = expyears;
}

instructor(){
department = "";
experienceYears = 0;
name = "";
id = -1;
}

string getDept(){
  return department;
}
int getExpYears(){
  return experienceYears;
}


~instructor(){}
  
void display(){
  Person.display();
cout<<"Instructor's department: "<<getDept()<<" Instructor years of experience: "<<getExpYears()<<endl;
}
}





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
