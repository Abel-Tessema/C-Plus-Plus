#include <iostream>
using namespace std;

int main() {
    double angle1, angle2, angle3, sumOfAngles;
    cout << "Input three angles of a triangle (separated with white spaces) to check its viability:";
    cin >> angle1 >> angle2 >> angle3;
    sumOfAngles = angle1 + angle2 + angle3;
    if (sumOfAngles == 180) { cout << "This triangle checks out.\n"; }
    else { cout << "Such a triangle can't exist.\n"; }

    return 0;
}