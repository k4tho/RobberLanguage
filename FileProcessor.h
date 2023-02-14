#ifndef FILE_PROCESSOR_H
#define FILE_PROCESSOR_H

#include "Translator.h"
#include <string>
#include <fstream>
#include <iostream>

class FileProcessor {
public:
    FileProcessor();
    ~FileProcessor();
    void processFile(std::string inputFile, std::string outputFile);
private:
    void writeHTMLFile(std::ostream& outStream, std::string decryptedMsg, std::string encryptedMsg);
};

#endif