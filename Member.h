//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_MEMBER_H
#define ATM_MEMBER_H

#include <string>

class Member {
    std::string name, email;
public:
    Member() = default;
    Member(const std::string& name, const std::string& email);

};


#endif //ATM_MEMBER_H
