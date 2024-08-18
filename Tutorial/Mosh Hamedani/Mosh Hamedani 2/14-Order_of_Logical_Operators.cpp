#include <iostream>
using namespace std;

int main() {
    bool isCitizen = true;
    bool hasDegree = false;
    int jobExperience = 2;

    bool result = isCitizen && (hasDegree || jobExperience >= 2);
    cout << boolalpha << result << endl;

    return 0;
}