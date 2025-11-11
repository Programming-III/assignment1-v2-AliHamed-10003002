#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
#include <string>
#using namespace std;
class Student{
private:
int yearLevel;
string major;
public:
Student(int yearLevel, string major){
this-> yearLevel = yearLevel;
this-> major = major; 
}

void display(){
  cout<<"Student year lavel: "<<yearLevel<<"Student major: " <<major<<endl;
}
}












#endif
