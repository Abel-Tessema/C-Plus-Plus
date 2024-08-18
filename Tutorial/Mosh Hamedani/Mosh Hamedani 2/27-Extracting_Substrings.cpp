#include <iostream>
using namespace std;

int main() {
    string name = "Bela Tessema Jash";
    size_t cuttingPoint = name.rfind(' ');
    string firstName = name.substr(0, cuttingPoint);
    string lastName = name.substr(cuttingPoint + 1);

    cout << "First name = " << firstName << endl
         << "Last name = " << lastName << endl;

    return 0;
}