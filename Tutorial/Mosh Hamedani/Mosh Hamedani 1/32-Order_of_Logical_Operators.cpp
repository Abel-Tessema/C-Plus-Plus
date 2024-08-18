#include <iostream>
using namespace std;

int main() {
    // Order of Precedence: ! , && , ||
    bool a = true;
    bool b = false;
    bool c = false;
    bool result1 = a && !b;
    cout << result1 << endl;
    bool result2 = a || b && c;
    cout << result2 << endl;
    bool result3 = (a || b) && c;
    cout << result3 << endl;
    
    return 0;
}