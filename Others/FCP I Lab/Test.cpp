#include <iostream>
#include <cmath> // For using the absolute value function.
using namespace std;

int main() {
    const int lim = 9; // For fixing the highest number in the pattern.

    // Adjusting the vertical length of the pattern. This corresponds to the y-axis on a coordinate plane.
    for (int y = 0; y <= lim * 2; y++) {

        cout << endl;

        // Adjusting the horizontal length of the pattern. This corresponds to the x-axis on a coordinate plane.
        for (int x = 0; x <= lim * 2; x++) {

            /* Combination of different linear inequalities that intersect to satisfy the shape of the pattern.
               Try them on 2D coordinate planes. The shape on the coordinate would be displayed vertically inverted.
               In this case, the inverted graph is identical to the initial. Even so, be careful on the inversion
               as it will affect the linear inequalities and lead to mathematical inaccuracies. */
            if ( y <= -x + lim || y <= x - lim || y - lim >= x || y - lim >= -x + 2 * lim )
                // The line below fills the pattern with the appropriate entries of number and white space.
                cout << lim - abs ( lim - x ) << " ";

            else cout << "  ";

        }

    }

    cout << endl << endl;

}