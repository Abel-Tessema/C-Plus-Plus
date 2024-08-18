#include <iostream>
using namespace std;

int main() {
    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0;
    // Outer if statement
    if (isCitizen) {
        // Inner if statement
        /*
          * if (caResident) {tuition = 0;}
          * else {tuition = 1'000;}
        */
        if (!caResident) {tuition = 1'000;}
    }
    else {tuition = 3'000;}

    return 0;
}