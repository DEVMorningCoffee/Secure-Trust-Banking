//
// Created by Jeffrey Abraham on 11/17/22.
//

#include "CheckingAccount.h"


float CheckingAccount::showBalance() {
    return this->balance;
}

void CheckingAccount::updateBalance(const float& amount) {
    this->balance += amount;
}