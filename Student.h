#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
#include <string>
#using namespace std;
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

void display(){
  cout<<"Student year lavel: "<<yearLevel<<"Student major: " <<major<<endl;
}
}












#endif
