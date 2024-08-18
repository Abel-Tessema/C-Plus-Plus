#include <iostream>
using namespace std;

struct Address {
    short street;
    string city;
    short zipCode;
};

struct Customer {
    string id;
    string name;
    string email;
    Address address;
};

int main() {
    Customer customer = {
        "ETS0027/14",
        "Bela Jash",
        "abelxotessema@gmail.com",
        {
            24,
            "Addis Abeba",
            1000
        }
    };

    cout << customer.address.zipCode << endl;

    return 0;
}