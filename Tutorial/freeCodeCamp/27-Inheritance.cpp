#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChicken () {
            cout << "The chef makes yummy chicken." << endl;
        }
        void makeSalad () {
            cout << "The chef makes salad." << endl;
        }
        void makeSpecialDish () {
            cout << "The chef makes bbq ribs." << endl;
        }
};

class ItalianChef : public Chef {
    public:
        void makePasta () {
            cout << "The chef makes pasta." << endl;
        }
        void makeSpecialDish () {
            cout << "The chef makes erttib." << endl;
        }
};

int main () {
    Chef chef;
    chef.makeChicken ();
    ItalianChef italianChef;
    italianChef.makeChicken ();
    italianChef.makePasta ();
    // chef.makePasta ();
    italianChef.makeSpecialDish ();
    return 0;
}