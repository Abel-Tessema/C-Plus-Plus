#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include <iostream>

using namespace std;

class FileReader {
public:
    FileReader(string fileName) {
        cout << "Constructor of FileReader" << endl;
    }
    string read() {
        return "Yahallo!\n";
    }
    string fileName() {
        return "filename";
    }
};

#endif