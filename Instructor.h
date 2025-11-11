#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
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













#endif
