#include <iostream>
#include "Account.h"
#include <typeinfo>
#include "BankDatabase.h"
#include "CashDispenser.h"


int main() {
    BankDatabase bankDatabase = BankDatabase();
//    bankDatabase.getAccount(3455);
//    cout << bankDatabase.getAccount(1234).getAccountNumber() << "\n";
    cout << bankDatabase.authenticateUser(1234, 54321) << "\n";
    cout << bankDatabase.getAvailableBalance(98765) << "\n";
    cout << bankDatabase.getTotalBalance(1245) << "\n";
//    cout << typeid(bankDatabase.getAccount(3455)).name() << "\n";

    CAshDispenser cashDispenser = CAshDispenser();
//    cashDispenser.dispenseCash(100);
}
