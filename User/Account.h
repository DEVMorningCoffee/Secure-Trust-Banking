//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_ACCOUNT_H
#define ATM_ACCOUNT_H

#include <string>
#include "../Payment Account/Balance.h"

class Account : public Balance{
    std::string first_name, last_name;
    int ID;
    bool status;
    Balance saving_balance, checking_balance;

public:
    Account() = default;
    Account(std::string&, std::string&);
    Account(std::string&, std::string&, float&, float&, int&, bool);

    // Setter
    void updateCheckingAccountBalance(const float& amount);
    void updateSavingAccountBalance(const float& amount);
    void changeStatus();

    // Getter
    bool getStatus() const;
    int getID() const;
    float getAccountCheckingBalance() const;
    float getAccountSavingBalance() const;
};


#endif //ATM_ACCOUNT_H
