#include <iostream>
#include "Account.h"
#include <typeinfo>
#include "BankDatabase.h"


int main() {
    BankDatabase bankDatabase = BankDatabase();
//    bankDatabase.getAccount(3455);
    cout << bankDatabase.getAccount(6786).getAccountNumber() << "\n";
//    cout << typeid(bankDatabase.getAccount(3455)).name() << "\n";
}
