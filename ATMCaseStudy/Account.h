//
// Created by oumar on 12/30/22.
//

#ifndef ATMCASESTUDY_ACCOUNT_H
#define ATMCASESTUDY_ACCOUNT_H



class Account {
private:
    int accountNumber;
    int pin;
    double availableBalance;
    double totalBalance;

//    account constructor initializes the attributes
public:
    Account(int theAccountNumber, int thePin, double theAvailableBalance, double theTotalBalance){
        accountNumber = theAccountNumber;
        pin = thePin;
        availableBalance = theAvailableBalance;
        totalBalance = theTotalBalance;
    }

//    determine whether a user-specified PIN matches PIN in account
public:
    bool validatePIN(int userPIN){
        if (userPIN == pin){
            return true;
        } else {
            return  false;
        } // end method pin
    }

//returns available balance
public:
    double getAvailableBalance(){
        return availableBalance;
    } //end method getAvailableBalance

//    return the total balance
public:
    double getTotalBalance(){
        return totalBalance;
    } // end method getTotalBalance

//    credits an amount to the account
public:
    void credit(double amount){
        totalBalance += amount;
    }

//    debits an amount from the account
public:
    void debit(double amount){
        availableBalance -= amount; //subtract form the available account
        totalBalance -= amount; // subtract from the total balance
    } //end method debit

//    return account number
public:
    int getAccountNumber(){
        return accountNumber;
    } // end getAccountNumber
}; // end class Account

#endif //ATMCASESTUDY_ACCOUNT_H