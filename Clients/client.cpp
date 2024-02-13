#include "client.h"

// constructors
Client::Client() = default;
Client::Client(string name, string password, double balance)
    : Person(name, password), balance(balance)
{
}

//_______setter & getter_______//

double Client::getBalance() const
{
    return this->balance;
}

//_______Methods_______//

void Client::deposit(double amount)
{
    this->balance += amount;
}

void Client::withdraw(double amount)
{
    this->balance -= amount;
}

void Client::checkBalance()
{
    cout << "Your Balance: " << this->balance << "\n";
}

void Client::display_information()
{
    int sz_pass = (int)password.size();
    cout << "/n********* Your Information*********/n"
         << "Name: " << this->name << "\n"
         << "password: " << string(sz_pass, '*') << "\n"
         << "id: " << this->id << "\n"
         << "Balance: " << this->balance << "\n";
}
