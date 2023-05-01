#ifndef _SAVING_ACCOUNT_H
#define _SAVING_ACCOUNT_H
#include "Account.h"

class Savings_Account : public Account
{
public:
    double int_rate;
    void deposite(double amount);
    void withdraw(double amount);
    Savings_Account();
    ~Savings_Account();
};

#endif