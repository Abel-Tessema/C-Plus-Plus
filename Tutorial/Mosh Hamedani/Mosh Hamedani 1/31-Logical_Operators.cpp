#include <iostream>
using namespace std;

int main() {
    int age = 10;
    bool isEligible1 = age > 18 && age < 65;
    cout << boolalpha << isEligible1 << endl;

    bool isEligible2 = age > 18 || age < 65;
    cout << isEligible2 << endl;
    
    cout << !isEligible2 << endl;

    int salary = 50'000;
    bool isEligible3 = age > 18 && age < 65 || salary > 30'000;
    cout << isEligible3 << endl;

    bool isEligible4 = age > 18 && (age < 65 || salary > 30'000);
    cout << isEligible4 << endl;

    return 0;
}