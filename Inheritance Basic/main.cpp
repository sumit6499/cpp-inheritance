#include <iostream>
#include "Saving_account.h"
#include "Account.h"
using namespace std;

int main()
{
    // The same structure followed by class declared by pointer
    cout << "Account class======================================" << endl;
    Account acc{};
    acc.deposite(200);
    acc.withdraw(200);
    cout << "Savings Account class======================================" << endl;
    Savings_Account sav_acc{};
    sav_acc.deposite(200);
    sav_acc.withdraw(200);
    return 0;
}