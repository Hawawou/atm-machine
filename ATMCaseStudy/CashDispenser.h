//
// Created by MADES on 02/01/2023.
//

#ifndef ATM_MACHINE_CASHDISPENSER_H
#define ATM_MACHINE_CASHDISPENSER_H

#include <iostream>
#include <string>
class CAshDispenser {
private:
    // the default initial number of bills in the cash dispenser
    const static int INITIAL_COUNT = 500;
    int count;// number of $20 bills remaining

public:
    // no-arguement CashDispenser constructor initializes count to default
    CAshDispenser() {
        count = INITIAL_COUNT;
    }

    // simulates dispensing of specific amount of cash
    void dispenseCash(int amount) {
        int billsRequired = amount / 20; // number of $20 bills required
        count -= billsRequired;// update the count of bills
        std::cout << count
    }

    // indicates whether cash dispenser can dispense desired amount
    bool isSufficientCashAvailable(int amount){
        int billsRequired = amount / 20;// number of $20 bills required

        if(count >= billsRequired){
            return true; // enough bills available
        }else{
            return false;// not enough bills available
        }

    }

};//end class CashDispenser



#endif //ATM_MACHINE_CASHDISPENSER_H
