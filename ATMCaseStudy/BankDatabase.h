//
// Created by oumar on 12/31/22.
//
#include "vector"
#include "Account.h"
#include <cstddef>

#include <exception>
#include <string>

using namespace std;

#ifndef ATMCASESTUDY_BANKDATABASE_H
#define ATMCASESTUDY_BANKDATABASE_H

class AccountNotFoundException : public std::exception {
public:
  explicit AccountNotFoundException(int account_id) :
    account_id_(account_id) { }

  const char* what() const noexcept override {
    return ("Account not found: " + std::to_string(account_id_)).c_str();
  }

private:
  int account_id_;
};


class BankDatabase {
private:
    vector <Account> accounts;

//    no argument BankDatabase constructor initializes accounts
public:
    BankDatabase(){
        accounts.push_back( Account(1234, 54321, 1000.0, 1200.0));
        accounts.push_back(Account(98765, 56789, 200.0, 200.0));
    }

//    retrieve account containing specific account number
private:
    Account getAccount(int accountNumber){
//        loop through accounts searching for matching account number
        for(Account currentAccount : accounts)
//    return current account if matched found
            if(currentAccount.getAccountNumber() == accountNumber)
                return currentAccount;
        // end for
        throw AccountNotFoundException(accountNumber);
    }

//    determine whether user specified account number and pin match those of an account in the db
public:
    bool authenticateUser(int userAccountNumber, int userPIN){
//        attempt to retrieve the account with the account number
        Account userAccount = getAccount(userAccountNumber);

//        if account exists, return result of the account method validatePIN
        try {
            return userAccount.validatePIN(userPIN);
        }
        catch (const std::exception&) {
            return false;
        }
    }

// return available balance of account with specified account number
public:
    double getAvailableBalance(int userAccountNumber){
        return getAccount(userAccountNumber).getAvailableBalance();
    }

//    return total balance of account with specified account number
public:
    double getTotalBalance(int userAccountNumber){
        return getAccount(userAccountNumber).getTotalBalance();
    }

//    credit an amount to account with specified account number
public:
    void credit(int userAccountNumber, double amount){
        getAccount(userAccountNumber).debit(amount);
    }
};


#endif //ATMCASESTUDY_BANKDATABASE_H
