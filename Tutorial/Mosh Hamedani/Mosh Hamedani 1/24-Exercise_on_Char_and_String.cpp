#include <iostream>
using namespace std;

int main() {
    string city, subcity, woreda, houseNum;
    cout << "Enter your city: ";
    getline(cin, city);
    cout << "Enter your subcity: ";
    getline(cin, subcity);
    cout << "Enter your woreda: ";
    getline(cin, woreda);
    cout << "Enter your house number: ";
    getline(cin, houseNum);
    cout << "\nYour address is: " << endl
         << "City = " << city << endl
         << "Subcity = " << subcity << endl
         << "Woreda = " << woreda << endl
         << "House number = " << houseNum << endl << endl;
    return 0;
}