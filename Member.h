//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_MEMBER_H
#define ATM_MEMBER_H

#include <string>
#include "Account.h"

class Member : public Account{
    std::string name, email;
    Account account;
public:
    Member() = default;
    Member(const std::string& name, const std::string& email);

    std::string showName();
    void updateName(const std::string& n);
    std::string showEmail();
    void updateEmail(const std::string& e);
};


#endif //ATM_MEMBER_H
