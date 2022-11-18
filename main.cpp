#include <iostream>
#include "User/Member.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Member member("John Doe", "JohnDoe@gmail.com");
    Member member2("John Doe", "JohnDoe@gmail.com");

    member.updateCheckingAccountBalance(1000);
    std::cout << member.showCheckingAccountBalance() << '\n';

    return 0;
}
