//
// Created by Jeffrey Abraham on 11/17/22.
//

#include "Account.h"

Account::Account(std::string& first_name, std::string& last_name) :  first_name(first_name), last_name(last_name){};

Account::Account(std::string& first_name, std::string& last_name, float& saving_balance, float& checking_balance, int& ID, bool status) :
    first_name(first_name), last_name(last_name), saving_balance(saving_balance), checking_balance(checking_balance),
    ID(ID), status(status){};

int Account::getID() const {
    return this->ID;
}

bool Account::getStatus() const {
    return this->status;
}

void Account::changeStatus() {
    this->status = !this->status;
}

void Account::updateCheckingAccountBalance(const float &amount) {
    this->checking_balance.updateBalance(amount);
}

void Account::updateSavingAccountBalance(const float &amount) {
    this->saving_balance.updateBalance(amount);
}

float Account::getAccountCheckingBalance() const{
    return this->checking_balance.getBalance();
}

float Account::getAccountSavingBalance() const{
    return this->saving_balance.getBalance();
}