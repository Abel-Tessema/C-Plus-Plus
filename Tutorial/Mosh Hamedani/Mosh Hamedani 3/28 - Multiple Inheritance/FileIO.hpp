#ifndef FILEIO_HPP
#define FILEIO_HPP

#include "FileReader.hpp"
#include "FileWriter.hpp"

class FileIO : public FileReader, public FileWriter {
public:
    FileIO(string fileName) : FileReader(fileName), FileWriter(fileName) {}
};

#endif