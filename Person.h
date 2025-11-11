#ifndef PERSON_H
#define PERSON_H
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











#endif
