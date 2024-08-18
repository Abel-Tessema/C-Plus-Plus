#include <iostream>
using namespace std;

int main() {
    bool isUSCitizen = true;
    bool hasBachelorDegree = false;
    // bool hasTwoYrExp = true;
    short yearsOfExperience = 3;

    bool isEligible = isUSCitizen && (hasBachelorDegree || yearsOfExperience >= 2);
    cout << boolalpha << isEligible << endl;
    return 0;
}