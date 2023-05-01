#include <iostream>
#include "Saving_account.h"
using namespace std;

Savings_Account::Savings_Account()
    : int_rate{3.0}
{
    cout << "Constructor called for Saving_Account class" << endl;
}
Savings_Account::~Savings_Account()
{
    cout << "Destructor called for Saving_Account class" << endl;
}
void Savings_Account::deposite(double amount)
{
    cout << "Saving class deposite method is called for " << amount << endl;
}
void Savings_Account::withdraw(double amount)
{
    cout << "Saving class withdraw method is called for " << amount << endl;
}