//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_BALANCE_H
#define ATM_BALANCE_H

#include "SavingAccount.h"
#include "CheckingAccount.h"

class Balance : public SavingAccount, public CheckingAccount{
protected:
    SavingAccount savingAccount;
    CheckingAccount checkingAccount;
public:
    Balance() = default;

    void updateCheckingAccount(const float& amount);
    void updateSavingAccount(const float& amount);
    float showCheckingAccount();
    float showSavingAccount();
};


#endif //ATM_BALANCE_H
