// client.h

#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
using namespace std;

class Client

{
private:
    string name, password;
    int id;
    double balance;

public:
    Client();
    Client(string name, string password, int id,double balance);

    bool is_correct_client(string password,int id);

    void setName(string name);
    void setPassword(string password);
    
    int getId()const;
    string getName()const;
    double getBalance()const;

    void deposit(double amount);
    void withdraw(double amount);

    void checkBalance();
    void display_information();

};



#endif