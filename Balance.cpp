//
// Created by Jeffrey Abraham on 11/17/22.
//

#include "Balance.h"

void Balance::updateCheckingAccount(const float &amount) {
    this->checkingAccount.updateBalance(amount);
}

void Balance::updateSavingAccount(const float &amount) {
    this->savingAccount.updateBalance(amount);
}

float Balance::showCheckingAccount() {
    return this->checkingAccount.showBalance();
}

float Balance::showSavingAccount() {
    return this->savingAccount.showBalance();
}