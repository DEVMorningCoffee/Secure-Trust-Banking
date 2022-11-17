//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_CHECKINGACCOUNT_H
#define ATM_CHECKINGACCOUNT_H


class CheckingAccount {
protected:
    //Default Amount;
    float balance = 1000;
public:
    CheckingAccount() = default;

    float showBalance();
    void updateBalance(const float& amount);
};


#endif //ATM_CHECKINGACCOUNT_H
