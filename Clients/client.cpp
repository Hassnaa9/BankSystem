#include "client.h"

// constructors
Client::Client() = default;
Client::Client(string name, string password, int id, double balance)
{
    this->setName(name);
    this->setPassword(password);
}

//_______setter & getter_______//

void Client::setName(string name)
{
    this->name = name;
}
void Client::setPassword(string password)
{
    this->password = password;
}

int Client::getId()const
{
    return this->id;
}
string Client::getName()const
{
    return this->name;
}
double Client::getBalance()const
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

bool Client::is_correct_client(string password, int id)
{
    return (this->password == password && this->id == this->id);
}