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
class Student : public person{
private:
int yearLevel;
string major;
public:
Student(int yearLevel, string major, string name, int id) : Person(name,id) {
this-> yearLevel = yearLevel;
this-> major = major; 
}

Student(){
  yearLevel = -1;
  major = "";
}
~Student(){}

int getYearLevel(){
  return yearLevel;
}
string getMajor(){
  return major;
}
void setMajor(string m){
  major = m;
}
void setYearLevel(int yl){
  yearLevel = yl;
}

void display(){
  cout<<"Student year lavel: "<<getYearLevel()<<"Student major: " <<getMajor()<<endl;
}
}






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
string getCourseCode(){
    return coursecode;
}
string getCname(){
    return courseName;
}
int getMaxStudents(){
    return maxStudents;
}

void getCurrentstudents(){
    return currentStudents;


void addStudent(const Student &s){
students += &s;
}

 void displayCourseInfo(){
  cout<<"Course name: <<getCname()<<endl<<" Course code: "<<getCourseCode()<<endl<<" Maximum students: "<<getMaxStudents()<<endl<<
  "Current number of enrolled students: "<<getCurrentstudents()<<endl<<" Student's info: "<<students->display()<<endl;
}
}







// ==================== Main Function ====================
int main() {
   Person s1 = new Student(5, )
    
    return 0;
}
