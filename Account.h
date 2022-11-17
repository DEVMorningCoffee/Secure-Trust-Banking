//
// Created by Jeffrey Abraham on 11/17/22.
//

#ifndef ATM_ACCOUNT_H
#define ATM_ACCOUNT_H


class Account {
protected:
    static int nextID;
    int ID;
    bool status;
public:
    Account() = default;

    bool showStatus();
    void changeStatus();
    int showID();

};


#endif //ATM_ACCOUNT_H
