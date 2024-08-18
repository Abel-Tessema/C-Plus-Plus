#ifndef ACCOUNTLOCKED_HPP
#define ACCOUNTLOCKED_HPP

#include <stdexcept>

using namespace std;

class AccountLocked : public exception {
    const char* what() const noexcept override;
};

#endif