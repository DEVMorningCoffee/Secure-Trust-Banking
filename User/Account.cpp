//
// Created by Jeffrey Abraham on 11/17/22.
//

#include "Account.h"

int Account::showID() {
    return this->ID;
}

int Account::nextID = 0;

bool Account::showStatus() {
    return this->status;
}

void Account::changeStatus() {
    this->status = !this->status;
}

void Account::updateCheckingAccountBalance(const float &amount) {
    this->checkingAccount.updateBalance(amount);
}

void Account::updateSavingAccountBalance(const float &amount) {
    this->SavingAccount::balance += amount;
}

float Account::showCheckingAccountBalance() {
    return this->checkingAccount.showBalance();
}

float Account::showSavingAccountBalance() {
    return this->savingAccount.showBalance();
}