#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class instructor{
private:
string department;
int experienceYears;
public:
instructor(string dep, int expyears){
department = dep;
experienceYears = expyears;
}

instructor(){
department = "";
experienceYears = 0;
}

~instructor(){}
  
void display(){
cout<<"Instructor's department: "<<department<<" Instructor years of experience: "<<experienceYears<<endl;
}
}













#endif
