//
// Created by Jeffrey Abraham on 12/3/22.
//

#include "Balance.h"

Balance::Balance(float& balance) : balance(balance) {}

float Balance::getBalance() const {
    return this->balance;
}

float Balance::updateBalance(const float& amount) {
    this->balance += amount;
    return this->balance;
}
