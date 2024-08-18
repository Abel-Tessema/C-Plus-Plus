#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    string major;
    double gpa;
    Student (string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }
    bool hasHonors () {
        if (gpa >= 3.85) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main () {
    Student student1 ("Jash", "SE", 3.91);
    Student student2 ("Seyoum", "SE", 3.60);
    
    cout << student1.hasHonors () << endl;
    cout << student2.hasHonors () << endl;
    /*
    for (int i = 1; i <=2; i++) {
        cout << Student[i].name << " " << Student[i].hasHonors () << endl;
    }
    */
    return 0;
}