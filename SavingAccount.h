//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_SAVINGACCOUNT_H
#define ATM_SAVINGACCOUNT_H


class SavingAccount {
    // Default Amount
    float balance = 1000;
public:
    SavingAccount() = default;

    float showBalance();
    void updateBalance(const float& amount);
};


#endif //ATM_SAVINGACCOUNT_H
