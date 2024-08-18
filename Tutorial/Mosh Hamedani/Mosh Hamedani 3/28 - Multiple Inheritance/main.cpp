#include "FileIO.hpp"
#include "FileReader.hpp"
#include "FileWriter.hpp"

#include <iostream>

using namespace std;

int main() {
    FileIO file{"filename"};
    // file.fileName();     // If we have a method in different base classes, we have to specify which one should be called by writing 'BaseClass::' after the member-accessing operator.
    cout << file.FileReader::fileName() << endl;

    return 0;
}