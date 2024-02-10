// employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
using namespace std;

class Employee{
    string name,password;
    int id ;
    float salary;

    public:
    //constructors
    Employee();
    Employee(string& name,std::string password,int id ,float salary );

    //destructor
    ~Employee();

    //getter and setter functions

    //Name
    void setName(string& name);
    string getName() const;

    //password
    void setPassword(string& password);
    string getPassword() const;

    //id
    void setId(int id);
    int getId() const;

    //salary
    void setSalary(string& name);
    float getSalary() const;

    //Employee Methods

    //login
    bool login(string password ,int id);

    //addClient 
    void addClient(Client obj);

   //list all clients
    void listAll();

   //edit info for client
   void editClient();

  //display Employee info
  void printEmployeeInfo(string& name,int id);

};
#endif