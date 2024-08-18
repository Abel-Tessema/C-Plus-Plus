#include <iostream>
using namespace std;

int main () {
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Jash";
    string *pName = &name;

    cout << pAge << endl;
    cout << &age << endl;
    cout << *pGpa << endl; // Dereferencing
    cout << &*pGpa << endl; // "Re-referencing"

    return 0;
}