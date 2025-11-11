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












#endif
