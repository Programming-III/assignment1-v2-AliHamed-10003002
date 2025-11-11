#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
    int id;
public:
Person(string name, int id){
    this->name = name;
    this->id = id;
}

virtual void display(){
    cout<<"Student name: "<<name<<"Student ID: "<<endl;
}




}











#endif
