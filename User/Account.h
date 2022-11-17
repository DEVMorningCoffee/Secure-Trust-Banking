//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_ACCOUNT_H
#define ATM_ACCOUNT_H

#include "../Payment/Balance.h"

class Account : public Balance{
protected:
    static int nextID;
    int ID;
    bool status;
    Balance balance;
public:
    Account() = default;

    bool showStatus();
    void changeStatus();
    int showID();
    Balance showBalance();
    void updateBalance(Balance b);
};


#endif //ATM_ACCOUNT_H
