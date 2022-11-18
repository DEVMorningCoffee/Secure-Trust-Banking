cmake_minimum_required(VERSION 3.21)
project(ATM)

set(CMAKE_CXX_STANDARD 23)

add_executable(ATM main.cpp User/Account.cpp User/Account.h "Payment Account/SavingAccount.cpp" "Payment Account/SavingAccount.h" "Payment Account/CheckingAccount.cpp" "Payment Account/CheckingAccount.h" User/Member.cpp User/Member.h Bank.cpp Bank.h)
