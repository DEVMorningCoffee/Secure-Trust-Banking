//
// Created by Jeffrey Abraham on 11/17/22.
//

#include "SavingAccount.h"

float SavingAccount::showBalance() {
    return this->balance;
}

float SavingAccount::updateBalance(const float& amount) {
    this->balance += amount;
}