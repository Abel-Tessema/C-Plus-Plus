#include <iostream>
using namespace std;

int main() {
    int choice;
    label1:
    cout << "Choose 1 or 2: ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        cout << "Good." << endl;
    }
    else {
        cout << "Invalid choice. Choose again." << endl;
        goto label1;
    }

    return 0;
}