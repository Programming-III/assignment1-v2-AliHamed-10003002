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
void setName(String n);
void setID(int x);
string getName();

int getID();

virtual void display();



}











#endif
