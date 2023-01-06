#include <iostream>
#include "Account.h"
#include <typeinfo>
#include "BankDatabase.h"
#include "CashDispenser.h"


int main() {
    BankDatabase bankDatabase = BankDatabase();
//    bankDatabase.getAccount(3455);
    cout << bankDatabase.getAccount(1288).getAccountNumber() << "\n";
//    cout << typeid(bankDatabase.getAccount(3455)).name() << "\n";

    CAshDispenser cashDispenser = CAshDispenser();
//    cashDispenser.dispenseCash(100);
}
