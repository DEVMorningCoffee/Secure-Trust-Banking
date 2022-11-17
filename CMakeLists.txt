cmake_minimum_required(VERSION 3.21)
project(ATM)

set(CMAKE_CXX_STANDARD 23)

add_executable(ATM main.cpp Account.cpp Account.h Payment/SavingAccount.cpp Payment/SavingAccount.h Payment/CheckingAccount.cpp Payment/CheckingAccount.h Payment/Balance.cpp Payment/Balance.h)
