#include "Translator.h"
#include "Model.h"
#include "FileProcessor.h"

#include <iostream>

int main() {
    FileProcessor fileProcessor;
    fileProcessor.processFile("InputFile.txt", "OutputFile.html");
    
    return 0;
}