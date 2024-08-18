#ifndef _HPP
#define _HPP

#include <iostream>

using namespace std;

class FileWriter {
public:
    FileWriter(string fileName) {
         cout << "Constructor of FileWriter" << endl;
    }
    void write(string content) {
        cout << content << endl;
    }
    string fileName() {
        return "filename";
    }
};

#endif