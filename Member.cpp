//
// Created by Jeffrey Abraham on 11/17/22.
//

#include "Member.h"

Member::Member(const std::string &name, const std::string &email) : name(name), email(email){
    Account::nextID++;
     this->ID = Account::nextID;
}

std::string Member::showName() {
    return this->name;
}

std::string Member::showEmail() {
    return this->email;
}

void Member::updateEmail(const std::string &e) {
    this->email = e;
}

void Member::updateName(const std::string &n) {
    this->name = n;
}