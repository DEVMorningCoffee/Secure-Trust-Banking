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