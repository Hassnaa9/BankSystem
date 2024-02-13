// client.h

#ifndef CLIENT_H
#define CLIENT_H

#include "../Person/person.h"

class Client : public Person
{
private:
    double balance;

public:
    Client();
    Client(string name, string password, double balance);

    double getBalance()const;

    void deposit(double amount);
    void withdraw(double amount);

    void checkBalance();
    void  display_information();
};



#endif