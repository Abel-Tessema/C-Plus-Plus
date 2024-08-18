#include <iostream>
using namespace std;

bool isValid(string customerNum) {
    if (customerNum.length() != 6)
        return false;
    for (int i = 0; i < 2; i++)
        if (!isalpha(customerNum[i]))
            return false;
    for (int i = 2; i < 6; i++)
        if (!isdigit(customerNum[i]))
            return false;
    return true;

    // if (!customerNum.length() == 6)
        // if (isalpha(customerNum[0]) && isalpha(customerNum[1]) && isdigit(customerNum[2]) && isdigit(customerNum[3]) && isdigit(customerNum[4]) && isdigit(customerNum[5]))
        //     return true;
        // return false;
}

int main() {
    theBeginning:
        cout << "Enter your customer number: ";
        string customerNum;
        getline(cin, customerNum);

        if (isValid(customerNum)) cout << "Valid!" << endl;
        else {
            cout << "Invalid! Try again." << endl;
            goto theBeginning;
        }

    return 0;
}