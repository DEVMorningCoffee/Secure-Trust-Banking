//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_ACCOUNT_H
#define ATM_ACCOUNT_H

#include "../Payment Account//SavingAccount.h"
#include "../Payment Account//CheckingAccount.h"

class Account : public SavingAccount, public CheckingAccount{
protected:
    static int nextID;
    int ID;
    bool status;
    SavingAccount savingAccount;
    CheckingAccount checkingAccount;
public:
    Account() = default;

    // Setter
    void updateCheckingAccountBalance(const float& amount);
    void updateSavingAccountBalance(const float& amount);
    void changeStatus();

    // Getter
    bool showStatus();
    int showID();
    float showCheckingAccountBalance();
    float showSavingAccountBalance();
};


#endif //ATM_ACCOUNT_H
