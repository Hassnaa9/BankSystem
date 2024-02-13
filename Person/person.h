//person.h

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
protected:
    int id;
    static long long next_person;
    string name,password;
public:
    Person();
    Person(string name,string password);

    bool login(string password, int id)const;

    void setName(string name);
    void setPassword(string password);
    void setId(){};

    int getId()const;
    string getName()const;

    void  display_information();
};




#endif