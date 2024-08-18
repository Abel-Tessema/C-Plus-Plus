#include <iostream>
using namespace std;

struct Customer {
    int ID;
    string name;
    string email;
};

int main() {
    Customer customer;

    cout << "Enter ID: ";
    cin >> customer.ID;

    cout << "Enter name: ";
    // cin >> customer.name;
    getline(cin, customer.name);

    cout << "Enter email: ";
    getline(cin, customer.email);

    cout << "ID = " << customer.ID << endl
         << "Name = " << customer.name << endl
         << "Email = " << customer.email << endl;

    return 0;
}