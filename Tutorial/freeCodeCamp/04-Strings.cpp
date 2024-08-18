#include <iostream>

using namespace std;

int main() {

    /*
    cout << "Abel Tessema" << endl;
    cout << "\nAbel Tessema\n";
    cout << "Béla Jash\n" << endl;
    cout << 50 << "\n" << endl;
    */

    string song = "Flower Face - Isobel";

    cout << song << endl;
    cout << song.length() << endl;
    cout << song[3] << endl;

    song[3] = 'W';
    cout << song << endl;

    cout << song.find("Face", 0) << endl;
    cout << song.find("Face", 8) << endl;
    cout << song.find("Flower", 0) << endl;
    cout << song.find("FloWer", 0) << endl;
    cout << song.find('c', 0) << endl;
    cout << song.find("Face") << endl;

    cout << song.substr(7, 4) << endl;
    // (starting position/index, number of characters)
    cout << song.substr(7, 5) << endl;

    song[3] = 'w';
    string artist;
    artist = song.substr(0, 11);
    cout << artist << endl;
    
    return 0;

}