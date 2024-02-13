#include "person.h"

// initialize static id to generate ids for persons
long long Person::next_person = 1000;

// generating ids for persons
void Person::setId()
{
    this->id = next_person++;
}

// constructors
Person::Person()
{
    setId();
};
Person::Person(string name, string password)
{
    setName(name);
    setPassword(password);
    if (!id)
        setId();
}

// login to system by using id and password
bool Person::login(string password, int id) const
{
    return (this->password == password && this->id == id);
}

// setter & getter

void Person::setName(string name)
{
    this->name = name;
}
void Person::setPassword(string password)
{
    this->password = password;
};

int Person::getId() const
{
    return this->id;
}
string Person::getName() const
{
    return this->name;
}
