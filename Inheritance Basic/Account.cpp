#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

Account::Account()
    : balance{0.0}, name{"none"}
{
    cout << "Constructor called for account class" << endl;
}
Account::~Account()
{
    cout << "Destructor called for Account class" << endl;
}
void Account::deposite(double amount)
{
    cout << "Account class deposite method is called for " << amount << endl;
}
void Account::withdraw(double amount)
{
    cout << "Account class withdraw method is called for " << amount << endl;
}